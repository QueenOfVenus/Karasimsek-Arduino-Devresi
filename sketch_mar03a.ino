int pwn1 = 2;
int pwn2 = 3;
int pwn3 = 4;
int pwn4 = 5;
int pwn5 = 6;
void setup() {
  pinMode(pwn1, OUTPUT);
  pinMode(pwn2, OUTPUT);
  pinMode(pwn3, OUTPUT);
  pinMode(pwn4, OUTPUT);
  pinMode(pwn5, OUTPUT);
}

void loop() {
  //for (int i=0 ; i<2 ;i++){
    int z = 1000;
    digitalWrite(pwn1, HIGH);
    delay(z); 
    digitalWrite(pwn1, LOW);
    delay(z); 
    digitalWrite(pwn2, HIGH);
    delay(z); 
    digitalWrite(pwn2, LOW);
    delay(z);
    digitalWrite(pwn3, HIGH);
    delay(z); 
    digitalWrite(pwn3, LOW);
    delay(z);
    digitalWrite(pwn4, HIGH);
    delay(z); 
    digitalWrite(pwn4, LOW);
    delay(z);
    digitalWrite(pwn5, HIGH);
    delay(z); 
    digitalWrite(pwn5, LOW);
    delay(z);
    digitalWrite(pwn4, HIGH);
    delay(z); 
    digitalWrite(pwn4, LOW);
    delay(z);
    digitalWrite(pwn3, HIGH);
    delay(z); 
    digitalWrite(pwn3, LOW);
    delay(z);
    digitalWrite(pwn2, HIGH);
    delay(z); 
    digitalWrite(pwn2, LOW);
    delay(z);
  //}
}
