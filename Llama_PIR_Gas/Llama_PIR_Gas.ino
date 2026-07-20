#define LLAMA 14
#define PIR 3
#define GAS 15

void setup() {
  Serial.begin(9600);
  pinMode(LLAMA,INPUT);
  pinMode(PIR,INPUT);
  pinMode(GAS,INPUT);
}

void loop() {
  Serial.print("LLAMA:");
  Serial.print(analogRead(LLAMA));
  Serial.print("   ");
  Serial.print("PIR:");
  Serial.print(digitalRead(PIR));
  Serial.print("   ");
  Serial.print("GAS:");
  Serial.println(analogRead(GAS));

  delay(1000);
