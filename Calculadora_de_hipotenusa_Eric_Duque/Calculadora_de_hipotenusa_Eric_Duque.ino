


//**********************************************************************************
**                                                                               **
**                                Eric duque Calcul Temp
**                                                                               **
**                                                                               **
**********************************************************************************//

//********** Includes *************************************************************

//********** Variables ************************************************************
int tempAigua = 101;

//********** Setup ****************************************************************
void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if (tempAigua < 100)
  {
    Serial.print("El agua todavia no hierve!");
  } 
  else if (tempAigua >= 100)
{
    Serial.print("El agua esta hirviendo");
  } 
               else ();
}

//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}
