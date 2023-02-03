  int vermelhocar = 8;
  int amarelocar = 9;
  int verdecar = 10;
  int vermelhop = 11;
  int verdep = 12;
  
void setup() {
  // put your setup code here, to run once:
  pinMode (vermelhocar, OUTPUT);
  pinMode (amarelocar, OUTPUT);
  pinMode (verdecar, OUTPUT);
  pinMode (vermelhop, OUTPUT);
  pinMode (verdep, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (vermelhocar, LOW);
  digitalWrite (amarelocar, HIGH);
  digitalWrite (verdecar, LOW);
  digitalWrite (vermelhop, HIGH);
  digitalWrite (verdep, LOW);

  delay(2000);

  digitalWrite(amarelocar, LOW);
  digitalWrite (vermelhocar, HIGH);
  digitalWrite (vermelhop, LOW);
  digitalWrite (verdep, HIGH);

  delay (5000);

  digitalWrite (vermelhocar, LOW);
  digitalWrite (verdecar, HIGH);
  digitalWrite (vermelhop, HIGH);
  digitalWrite (verdep, LOW);

  delay(5000);
  
}
