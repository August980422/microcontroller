//  點亮 1~10~9~1來回循環    //a1031b.ion

#define t 200

#define LED0 32

#define LED1 33

#define LED2 25

#define LED3 26

#define LED4 27

#define LED5 14

#define LED6 04

#define LED7 16

#define LED8 17

#define LED9 05



void setup() {

 

  pinMode(LED0, OUTPUT);

  pinMode(LED1, OUTPUT);

  pinMode(LED2, OUTPUT);

  pinMode(LED3, OUTPUT);

  pinMode(LED4, OUTPUT);

  pinMode(LED5, OUTPUT);

  pinMode(LED6, OUTPUT);

  pinMode(LED7, OUTPUT);

  pinMode(LED8, OUTPUT);

  pinMode(LED9, OUTPUT);

}



void loop() {

  /*

   // LED0 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second

  */

  // LED0 亮

  digitalWrite(LED0, 0);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED1 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, 0);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second

   // LED2 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, 0);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second

   // LED3 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, 0);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second

   // LED4 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, 0);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second



   // LED5 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, 0);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED6 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, 0);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED7 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, 0);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED8 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, 0);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second

     // LED9 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, 0);

  delay(t); // wait for a second


   // 回程LED8 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, 0);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED7 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, 0);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED6 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, 0);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED5 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, 0);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED4 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, 0);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED3 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, 0);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED2 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, HIGH);

  digitalWrite(LED2, 0);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second


   // LED1 亮

  digitalWrite(LED0, HIGH);  

  digitalWrite(LED1, 0);

  digitalWrite(LED2, HIGH);

  digitalWrite(LED3, HIGH);

  digitalWrite(LED4, HIGH);  

  digitalWrite(LED5, HIGH);

  digitalWrite(LED6, HIGH);

  digitalWrite(LED7, HIGH);

  digitalWrite(LED8, HIGH);

  digitalWrite(LED9, HIGH);

  delay(t); // wait for a second

}