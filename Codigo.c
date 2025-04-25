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
  
  if(luminosidade > 600){ // Aciona o Led Vermelho caso a luminosidade esteja muito forte
    tocarPiezzo();//Aciona o buzzzer
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
  }  
  else if (luminosidade >= 400 && luminosidade <= 600){//Aciona o led Amarelo se a luminosidade estiver moderada
    noTone(buzzer); //Não tocar o buzzer
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledVermelho, LOW);
  }
  else{// Aciona o led Verde quando a luminosidade estiver baixa
    noTone(buzzer); //Não tocar o buzzer
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVermelho, LOW);

  }
}

void tocarPiezzo(){
	tone (buzzer, 500, 1000);//Tocar o buzzer
  	delay(3000);
  	noTone(buzzer); //Não tocar o buzzer
  	delay(1000);
}
