int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;
int buzzer = 7;

int sensorLDR = A5;
void setup()
{
  pinMode(buzzer, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledAmarelo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(sensorLDR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int luminosidade = analogRead(sensorLDR);
  Serial.print("Luminosidade de: ");
  Serial.println(luminosidade);
  
  if(analogRead(sensorLDR) > 600){ 
    noTone(buzzer);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
  }  
  else if (analogRead(sensorLDR) >= 400 && analogRead(sensorLDR) <= 600){
    noTone(buzzer);//Não tocar o buzzer
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, LOW);
  }
  else{
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, HIGH);
    tocarPiezzo();
  }
}

void tocarPiezzo(){
	tone (buzzer, 500, 1000);//Tocar o buzzer
  	delay(3000);
  	noTone(buzzer); //Não tocar o buzzer
  	delay(1000);
}