#include <esp_now.h>
#include <WiFi.h>
#define btn1 5
String ard = "";
char destination[80]; // Make sure it's big enough to hold the source string



// REPLACE WITH YOUR ESP RECEIVER'S MAC ADDRESS
uint8_t broadcastAddress1[] = {0x7C, 0x87, 0xCE, 0x2D, 0x4E, 0xAC}; //Enter your Receiver board MAC Address

typedef struct message_struct {
  char message[100]; // "hello" plus null terminator
} message_struct;

message_struct message;

esp_now_peer_info_t peerInfo;

// callback when data is sent
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
  char macStr[18];
  Serial.print("Packet to: ");
  // Copies the sender mac address to a string
  snprintf(macStr, sizeof(macStr), "%02x:%02x:%02x:%02x:%02x:%02x",
           mac_addr[0], mac_addr[1], mac_addr[2], mac_addr[3], mac_addr[4], mac_addr[5]);
  Serial.print(macStr);
  Serial.print(" send status:\t");
  Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Delivery Success" : "Delivery Fail");
}
 
void setup() {
  Serial.begin(9600);
  pinMode(btn1, INPUT_PULLUP);
  WiFi.mode(WIFI_STA);
 
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }
  
  esp_now_register_send_cb(OnDataSent);
   
  // register peer
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;
  // register first peer  
  memcpy(peerInfo.peer_addr, broadcastAddress1, 6);
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    Serial.println("Failed to add peer");
    return;
  }
}
 
void loop() {

 if (Serial.available()) { // Check if data is available to read
     ard =  Serial.readStringUntil('\n'); // Read the message until newline character
    Serial.print("Message from Arduino: ");
    Serial.println(ard); // Print the received message

  }
  // Convert String to char array and copy
ard.toCharArray(destination, sizeof(destination));
 strcpy(message.message,destination);
  
  esp_err_t result = esp_now_send(broadcastAddress1, (uint8_t *) &message, sizeof(message_struct));
  
  delay(100);
}void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
