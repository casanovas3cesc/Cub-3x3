/**********************************************************************************
**                                                                               **
**                              Array de 8 LEDs                                  **
**                                                                               **
**                                                                               **
**********************************************************************************/
//********** Includes *************************************************************
//********** Variables ************************************************************
const int col_9 = 2;          // donar nom al pin 5 de l’Arduino
const int col_8 = 3;          // donar nom al pin 6 de l’Arduino
const int col_7 = 4;          // donar nom al pin 7 de l’Arduino
const int col_6 = 5;          // donar nom al pin 8 de l’Arduino
const int col_5 = 6;          // donar nom al pin 9 de l’Arduino
const int col_4 = 7;         // donar nom al pin 10 de l’Arduino
const int col_3 = 8;         // donar nom al pin 11 de l’Arduino
const int col_2 = 9;         // donar nom al pin 12 de l’Arduino
const int col_1 = 10;
const int trans_3 = 13;
const int trans_2 = 12;
const int trans_1 = 11;
unsigned long temps = 1000;
//********** Setup ****************************************************************
void setup()
{
  pinMode(col_9, OUTPUT);     
  pinMode(col_8, OUTPUT);     
  pinMode(col_7, OUTPUT);     
  pinMode(col_6, OUTPUT);   
  pinMode(col_5, OUTPUT);   
  pinMode(col_4, OUTPUT);   
  pinMode(col_3, OUTPUT);     
  pinMode(col_2, OUTPUT);    
  pinMode(col_1, OUTPUT); 
  pinMode(trans_3, OUTPUT);
  pinMode(trans_2, OUTPUT); 
  pinMode(trans_1, OUTPUT);  
}
//********** Loop *****************************************************************
void loop()
{
 
  digitalWrite(col_9, HIGH);     
  digitalWrite(col_8, HIGH);     
  digitalWrite(col_7, HIGH);     
  digitalWrite(col_6, HIGH);   
  digitalWrite(col_5, HIGH);   
  digitalWrite(col_4, HIGH);   
  digitalWrite(col_3, HIGH);     
  digitalWrite(col_2, HIGH);    
  digitalWrite(col_1, HIGH); 
  digitalWrite(trans_3, HIGH);
  digitalWrite(trans_2, HIGH); 
  digitalWrite(trans_1, HIGH);  
  
  delay(temps);               
  
   digitalWrite(col_9, LOW);     
  digitalWrite(col_8, LOW);     
  digitalWrite(col_7, LOW);     
  digitalWrite(col_6, HIGH);   
  digitalWrite(col_5, LOW);   
  digitalWrite(col_4, LOW);   
  digitalWrite(col_3, LOW);     
  digitalWrite(col_2, LOW);    
  digitalWrite(col_1, LOW); 
  digitalWrite(trans_3, HIGH);
  digitalWrite(trans_2, LOW); 
  digitalWrite(trans_1, LOW);  
  
  delay(temps);        
  
 



  
          }
 
//********** Funcions *************************************************************
