// Programa que lê temperatura apartir do sensor 
//LM35 e de acordo com de derminadas temperaturas 
//acionada leds até a medida máxima que aciona a buzina 
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;  //linhas que descrevem os pinos de entrada do led no arduino
int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;
int buzina = 12;

int temperatura = A0; // pino de entrada analogica do sensor LM35 no arduino

int grau = 0; // descreve o grau a ser medido pelo sensor
int TF = 0;   // temperatura final


void setup()
 {
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT); // declarando os pinos do led como OUTPUT= saída
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);

  pinMode(buzina, OUTPUT); // declarando buzina como OUTPUT= saída
  pinMode(temperatura, INPUT); // declarando sensor LM35 como INPUT= entrada

  Serial.begin(9600); // abre a porta serial e ajusta a taxa de transferência de dados para 9600 bps

  analogReference(INTERNAL); //faz com que a tensão máxima na porta do arduino seja reduzida para 1,1V. podendo medir até 110C°
  
} 

void loop() 

{
  grau = analogRead(temperatura); // grau medido pelo sensor = leitura em grandeza analógica. "Grau" agora vale "temperatura"

  TF = grau * 0.1075268817204301; // Temperatura final é "grau" * pelo fundo de escala dividido pelo range 

  Serial.print("Temperatura: "); //imprimindo "Temperatura:"
  Serial.print(TF); // imprimindo "Temperatura: TF (temperatura final)"
  Serial.print("\n"); //pulando linha

if((TF > 0) && (TF <= 10)) //se TF for maior que 0C° e menor a 10C°
{
  digitalWrite(led2, HIGH);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW); // Então led2 vai ligar e buzina o restante desligar
  digitalWrite(led6, LOW);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(buzina, LOW);  
}

 else if((TF > 10) && (TF <= 20)) // se não, então se TF for maior que 10C° e TF for menor ou igual a 20C°

 {
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW); // então led2 e led3 estarão ligados e buzina os demais delisgados
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(buzina, LOW); 
}

else if((TF > 20) && (TF <= 30)) // se não, então se TF for maior que 20C° e menor e igual a 30C°
 {
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, LOW);
  digitalWrite(led6, LOW); // então led2, led3 e led4 estarão ligados e buzina os demais desligados
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(buzina, LOW);
}

else if((TF > 30) && (TF <= 40)) // se não, então se TF for maior que 30C° e menor e igual a 40C°

{ 
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH);
  digitalWrite(led6, LOW); // então led2, led3, led4 e led5 estarão ligados e buzina os demais desligados
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(buzina, LOW);
}

 else if((TF > 40) && (TF <= 50)) // se não, então se TF for maior que 40C° e menor e igual a 50C°


{
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH); // então led2, led3, led4 e led5 e led6 estarão ligados e buzina os demais desligados
  digitalWrite(led6, HIGH);
  digitalWrite(led7, LOW);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
///  digitalWrite(buzina, LOW);
}

 else if((TF > 50) && (TF <= 60)) // se não, então se TF for maior que 50C° e menor e igual a 60C°

{
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH); // então led2, led3, led4 e led5, led6 e led7 estarão ligados e buzina os demais desligados
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(buzina, LOW);
}

else if((TF > 60) && (TF <= 70))  // se não, então se TF for maior que 60C° e menor e igual a 70C°

{
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH); // então led2, led3, led4 e led5, led6, led7 e led8 estarão ligados e buzina os demais desligados
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(buzina, LOW);
}

 else if((TF > 70) && (TF <= 80)) // se não, então se TF for maior que 70C° e menor e igual a 80C°

{
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH); // então led2, led3, led4 e led5, led6, led7, led8 e led9 estarão ligados e buzina os demais desligados
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  digitalWrite(buzina, LOW);

}

else if((TF > 80) && (TF <= 90)) // se não, então se TF for maior que 80C° e menor e igual a 90C°

{
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH); // então led2, led3, led4 e led5, led6, led7, led8, led9 e led10 estarão ligados e buzina os demais desligados
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, LOW);
  digitalWrite(buzina, LOW);
}

 else if((TF > 90) && (TF <= 95)) // se não, então se TF for maior que 90C° e menor e igual a 95C°

{
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH);
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH); // então led2, led3, led4 e led5, led6, led7, led8, led9, led10 e led11 estarão ligados e buzina desligada
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(buzina, LOW);
} 
 else

{
  digitalWrite(led2, HIGH); 
  digitalWrite(led3, HIGH); 
  digitalWrite(led4, HIGH); 
  digitalWrite(led5, HIGH); // se não, então todos os leds e buzina estarão ligados
  digitalWrite(led6, HIGH);
  digitalWrite(led7, HIGH);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  digitalWrite(buzina, HIGH);
}

}