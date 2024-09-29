#include <ArduinoJson.h>
 

const int trigPinFrontal = 9;
const int echoPinFrontal = 10;
const int trigPinTraseiro = 11;
const int echoPinTraseiro = 12;
 
// Função para medir a distância
long medirDistancia(int trigPin, int echoPin) {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  long duracao = pulseIn(echoPin, HIGH);
  long distancia = duracao * 0.034 / 2; // cm
  return distancia;
}
 
void setup() {
  pinMode(trigPinFrontal, OUTPUT);
  pinMode(echoPinFrontal, INPUT);
  pinMode(trigPinTraseiro, OUTPUT);
  pinMode(echoPinTraseiro, INPUT);
 
  Serial.begin(9600); 
}
 
void loop() {
  long distanciaFrontal = medirDistancia(trigPinFrontal, echoPinFrontal);
  long distanciaTraseira = medirDistancia(trigPinTraseiro, echoPinTraseiro);
 
  // Criação do objeto JSON
  StaticJsonDocument<200> doc;
  doc["distancia_frontal"] = distanciaFrontal;
  doc["distancia_traseira"] = distanciaTraseira;
 
  // Serializa o JSON e envia para o monitor serial
  serializeJson(doc, Serial);
  Serial.println(); 
 
  delay(3000);
}