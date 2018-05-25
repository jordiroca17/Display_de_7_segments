/**********************************************************************************
**                                                                               **
**                              Fade LEDs                                        **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************


//********** Variables ************************************************************
int a=9;
int b=3;
int c=4;
int d=5;
int e=6;
int f=7;
int g=8;


//********** Setup ****************************************************************
void setup ()
{
pinMode (a,OUTPUT);
 pinMode (b,OUTPUT);
 pinMode (c,OUTPUT);
 pinMode (d,OUTPUT);
 pinMode (e,OUTPUT);
 pinMode (f,OUTPUT);
 pinMode (g,OUTPUT);
}


//********** Loop *****************************************************************
void loop()
{
 digitalWrite(a,HIGH); //1
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);

  digitalWrite(a,LOW); //2
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay(1000);

   digitalWrite(a,LOW); //3
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay(1000);

    digitalWrite(a,HIGH); //4
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);

    digitalWrite(a,LOW); //5
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,HIGH;
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);

    digitalWrite(a,HIGH); //6
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);

    digitalWrite(a,LOW); //7
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(1000);

    digitalWrite(a,LOW); //8
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);

    digitalWrite(a,LOW); //9
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(1000);
 }
//********** Funcions *************************************************************





