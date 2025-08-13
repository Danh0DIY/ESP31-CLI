// Chân LED
int ledPin = 8;

void setup() {
  pinMode(ledPin, OUTPUT); // Đặt chân 8 làm OUTPUT
}

void loop() {
  digitalWrite(ledPin, HIGH); // Bật LED
  delay(500);                 // Đợi 0.5 giây
  digitalWrite(ledPin, LOW);  // Tắt LED
  delay(500);                 // Đợi 0.5 giây
}
