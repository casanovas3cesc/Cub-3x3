/**********************************************************************************
**                                                                               **
**                             Cub de 3x3x3 LEDs                                 **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
const int col1 = 10;          
const int col2 = 9;          
const int col3 = 8;          
const int col4 = 7;          
const int col5 = 6;        
const int col6 = 5;         
const int col7 = 4;        
const int col8 = 3;         
const int col9 = 2;                   
const int tran1 = 11;         
const int tran2 = 12;        
const int tran3 = 13;
int vel = 500;         

//********** Setup ****************************************************************
void setup()
{
  pinMode(col1, OUTPUT);     
  pinMode(col2, OUTPUT);     
  pinMode(col3, OUTPUT);     
  pinMode(col4, OUTPUT);    
  pinMode(col5, OUTPUT);   
  pinMode(col6, OUTPUT);    
  pinMode(col7, OUTPUT);     
  pinMode(col8, OUTPUT);     
  pinMode(col9, OUTPUT);    
  pinMode(tran1, OUTPUT);    
  pinMode(tran2, OUTPUT);     
  pinMode(tran3, OUTPUT);        
}

//********** Loop *****************************************************************
void loop()
{
  digitalWrite(col1, HIGH);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, HIGH);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);                 
  
  digitalWrite(col1, LOW);    
  digitalWrite(col2, HIGH);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, HIGH);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);  
  
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, HIGH);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, HIGH);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);

  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, HIGH);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, HIGH);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, LOW);     
  
  delay(vel); 
  
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, HIGH);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, HIGH);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);
  
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, HIGH);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, HIGH);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, LOW);     
  
  delay(vel); 
   
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, HIGH);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, HIGH);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);
    
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, HIGH);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, HIGH);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);  
  
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, HIGH);    
  digitalWrite(tran1, HIGH);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, LOW);     
  
  delay(vel); 
   
  digitalWrite(col1, HIGH);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, HIGH);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);  
  
  digitalWrite(col1, LOW);    
  digitalWrite(col2, HIGH);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, HIGH);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);
    
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, HIGH);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, HIGH);    
  digitalWrite(tran3, LOW);     
  
  delay(vel); 
   
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, HIGH);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, HIGH);    
  digitalWrite(tran3, LOW);     
  
  delay(vel); 
   
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, HIGH);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, HIGH);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);
    
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, HIGH);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, HIGH);    
  digitalWrite(tran3, LOW);     
  
  delay(vel); 
   
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, HIGH);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, HIGH);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);
    
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, HIGH);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, HIGH);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);
    
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, HIGH);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, HIGH);    
  digitalWrite(tran3, LOW);     
  
  delay(vel);  
  
  digitalWrite(col1, HIGH);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, HIGH);     
  
  delay(vel);
    
  digitalWrite(col1, LOW);    
  digitalWrite(col2, HIGH);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, HIGH);     
  
  delay(vel); 
   
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, HIGH);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, HIGH);     
  
  delay(vel);
    
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, HIGH);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, HIGH);     
  
  delay(vel); 
   
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, HIGH);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, HIGH);     
  
  delay(vel);  
  
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, HIGH);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, HIGH);     
  
  delay(vel);  
  
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, HIGH);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, HIGH);     
  
  delay(vel);
    
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, HIGH);   
  digitalWrite(col9, LOW);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, HIGH);     
  
  delay(vel); 
   
  digitalWrite(col1, LOW);    
  digitalWrite(col2, LOW);    
  digitalWrite(col3, LOW);    
  digitalWrite(col4, LOW);    
  digitalWrite(col5, LOW);    
  digitalWrite(col6, LOW);    
  digitalWrite(col7, LOW);    
  digitalWrite(col8, LOW);   
  digitalWrite(col9, HIGH);    
  digitalWrite(tran1, LOW);    
  digitalWrite(tran2, LOW);    
  digitalWrite(tran3, HIGH);     
  
  delay(vel);     
}

//********** Funcions *************************************************************
