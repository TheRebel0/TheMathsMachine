void setup() {
  Serial.begin(9600);
}

void loop() {
  int valA0 = analogRead(A0); // 0-1023
  int valA1 = analogRead(A1); // 0-1023

  Serial.print(valA0);
  Serial.print(" ");  // space separates the 2 lines in the plot
  Serial.println(valA1);
  
  delay(60); 
}
