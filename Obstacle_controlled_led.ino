


int ECHO=7;
int Trig=8;
int led_vcc=10;
void setup() {
  // put your setup code here, to run once:
pinMode(led_vcc,OUTPUT);
pinMode(ECHO,INPUT);
pinMode(Trig,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(Trig,LOW);
delay(5);
digitalWrite(Trig,HIGH);
delay(50);
digitalWrite(Trig,LOW);
int duration= pulseIn(ECHO,HIGH);

int cm=duration/29/2;
Serial.println(cm);

if( cm<100  )                                                                                                                                                                                                                                               )

{
digitalWrite(led_vcc,HIGH);
}
else
{digitalWrite(led_vcc,LOW);
  }

}
