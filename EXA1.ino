float V = 0.0;
float g = 0.0;

void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop()
{
  V = analogRead(A0);
  g = -((V*4)/1023-2);
  Serial.print("Aceleración: ");
  Serial.print(g);
  Serial.println(" fuerza g obtenida");
  delay(1000);
}
