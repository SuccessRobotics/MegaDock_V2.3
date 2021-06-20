void setup()
{
  pinMode(4, OUTPUT); pinMode(46, OUTPUT); pinMode(48, OUTPUT);
  pinMode(5, OUTPUT); pinMode(50, OUTPUT); pinMode(52, OUTPUT);
  pinMode(6, OUTPUT); pinMode(38, OUTPUT); pinMode(40, OUTPUT);
  pinMode(7, OUTPUT); pinMode(42, OUTPUT); pinMode(44, OUTPUT);

  pinMode(39, OUTPUT);
}

void loop()
{
  digitalWrite(4, HIGH);
  digitalWrite(46, HIGH); digitalWrite(48, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(50, HIGH); digitalWrite(52, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(38, HIGH); digitalWrite(40, LOW);
  digitalWrite(7, HIGH);
  digitalWrite(42, HIGH); digitalWrite(44, LOW);

  digitalWrite(39, HIGH); delay(1000);

  digitalWrite(4, HIGH);
  digitalWrite(46, LOW); digitalWrite(48, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(50, LOW); digitalWrite(52, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(38, LOW); digitalWrite(40, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(42, LOW); digitalWrite(44, HIGH);

  digitalWrite(39, LOW); delay(1000);
}
