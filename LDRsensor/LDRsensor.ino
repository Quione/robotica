void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(A5,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(analogRead(A5));
  delay(250);
  int comp = analogRead(A5);

  if (comp > 680 && comp < 700){
    Serial.println("vermelho E01E37");
    digitalWrite (2, HIGH);
    daley (1000);
  }
  if (comp > 770 && comp < 790){
    Serial.println("amarelo FCF300");
    digitalWrite (3, HIGH);
    daley (1000);
  }
  if (comp > 700 && comp < 720){
    Serial.println("verde 70E000");
    digitalWrite (4, HIGH);
    daley(1000);
  }

  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  
}
