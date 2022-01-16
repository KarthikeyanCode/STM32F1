//Arduino code for uart with stm32

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  char _buffer[50];
  int iter=0;
  memset(_buffer, 0, 50);
  while(Serial.available())
  {
    _buffer[iter] = Serial.read();
    iter++;
  }
  Serial.println(_buffer);
  delay(1000);
}
