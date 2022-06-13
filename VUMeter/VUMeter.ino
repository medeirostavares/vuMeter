
int ledVerde    = 1;
int ledVermelho = 2;
int ledBranco   = 3;
int ledAmarelo  = 4;
int ledCiano    = 5;
int ledAzul     = 6;

int bumboPin    = 8;

void setup() 
{
    pinMode(ledBranco,OUTPUT);
    digitalWrite (ledBranco, LOW);  
    pinMode(ledAzul,OUTPUT);
    digitalWrite (ledAzul, LOW);
    pinMode(ledAmarelo,OUTPUT);
    digitalWrite (ledAmarelo, LOW);
    pinMode(ledVerde,OUTPUT);
    digitalWrite (ledVerde, LOW);
    pinMode(ledCiano,OUTPUT);
    digitalWrite (ledCiano, LOW);
    pinMode(ledVermelho,OUTPUT);
    digitalWrite (ledVermelho, LOW);
    pinMode(bumboPin, INPUT); 
}

void loop() 
{
      if(!digitalRead(bumboPin))
      {
          delay(80);
          digitalWrite (ledBranco, HIGH);
          delay(50);
          digitalWrite (ledAzul, HIGH);
          delay(50);
          digitalWrite (ledVerde, HIGH);
          delay(50);
          digitalWrite (ledAmarelo, HIGH);
          delay(50);
          digitalWrite (ledCiano, HIGH);
          delay(50);
          digitalWrite (ledVermelho, HIGH); 
    
          delay(50);
          
          digitalWrite (ledCiano, LOW);
          delay(50);
          digitalWrite (ledAmarelo, LOW);
          delay(50);
          digitalWrite (ledVerde, LOW);
          delay(50);
          digitalWrite (ledAzul, LOW);
          delay(50);
          digitalWrite (ledBranco, LOW);
          
          digitalWrite (ledVermelho, LOW);
      }
}
