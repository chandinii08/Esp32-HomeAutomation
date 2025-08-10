#include <Arduino.h>
#include <ESPAsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <ESP8266WiFi.h>

int ledArr[4] = {5, 4, 12, 13}; 
AsyncWebServer server(80);

const char *ssid = "Galaxy F23 5G 73C2";
const char *pass = "zxre9606";

const char index_html[] PROGMEM = R"rawliteral(
<!DOCTYPE html>
<html>
<head>
  <title>LED Control</title>
  <meta name="viewport" content="width=device-width, initial-scale=1">
  <style>
    body { font-family: Arial; text-align: center; margin-top: 40px; }
    button { padding: 12px 24px; margin: 5px; font-size: 18px; cursor: pointer; border: none; border-radius: 5px; }
    .on { background-color: green; color: white; }
    .off { background-color: red; color: white; }
  </style>
</head>
<body>
  <h1>LED Control</h1>
  <div>
    <h3>LED 0</h3>
    <button class="on" onclick="fetch('/led?ledNo=0&state=1')">ON</button>
    <button class="off" onclick="fetch('/led?ledNo=0&state=0')">OFF</button>
  </div>
  <div>
    <h3>LED 1</h3>
    <button class="on" onclick="fetch('/led?ledNo=1&state=1')">ON</button>
    <button class="off" onclick="fetch('/led?ledNo=1&state=0')">OFF</button>
  </div>
  <div>
    <h3>LED 2</h3>
    <button class="on" onclick="fetch('/led?ledNo=2&state=1')">ON</button>
    <button class="off" onclick="fetch('/led?ledNo=2&state=0')">OFF</button>
  </div>
  <div>
    <h3>LED 3</h3>
    <button class="on" onclick="fetch('/led?ledNo=3&state=1')">ON</button>
    <button class="off" onclick="fetch('/led?ledNo=3&state=0')">OFF</button>
  </div>
</body>
</html>
)rawliteral";

void setup() {
  Serial.begin(115200);

  WiFi.begin(ssid, pass);
  Serial.print("Connecting");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  for (int i = 0; i < 4; i++) {
    pinMode(ledArr[i], OUTPUT);
    digitalWrite(ledArr[i], LOW);
  }

  server.on("/", HTTP_GET, [](AsyncWebServerRequest *request) {
    request->send_P(200, "text/html", index_html);
  });

  server.on("/led", HTTP_GET, [](AsyncWebServerRequest *request) {
    if (request->hasParam("ledNo") && request->hasParam("state")) {
      int ledNo = request->getParam("ledNo")->value().toInt();
      int state = request->getParam("state")->value().toInt();

      if (ledNo >= 0 && ledNo < 4) {
        digitalWrite(ledArr[ledNo], state);
        Serial.printf("LED %d -> %s\n", ledNo, state ? "ON" : "OFF");
        request->send(200, "text/plain", "LED updated");
      } else {
        request->send(400, "text/plain", "Invalid LED number");
      }
    } else {
      request->send(400, "text/plain", "Missing parameters");
    }
  });

  server.begin();
}

void loop() {

}
