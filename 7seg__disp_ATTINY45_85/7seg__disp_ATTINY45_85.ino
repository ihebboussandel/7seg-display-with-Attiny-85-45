#define delay_time 300;


void setup() {
  // put your setup code here, to run once:
pinMode(0,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 
 ///zero 
 digitalWrite(0,LOW);
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 delay(delay_time);
  /// 1  
 digitalWrite(0,LOW);
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 delay(delay_time);
   /// 2  
 digitalWrite(0,LOW);
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 delay(delay_time);
    /// 3  
 digitalWrite(0,LOW);
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH);
 delay(delay_time);

 /// 4
 digitalWrite(0,LOW);
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 delay(delay_time);
      /// 5
 digitalWrite(0,LOW);
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 delay(delay_time);
       /// 6
 digitalWrite(0,LOW);
 digitalWrite(1,HIGH);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 delay(delay_time);
        /// 7
 digitalWrite(0,LOW);
 digitalWrite(1,HIGH);
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH);
 delay(delay_time);
         /// 8
 digitalWrite(0,HIGH);
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 delay(delay_time);
          /// 9
 digitalWrite(0,HIGH);
 digitalWrite(1,LOW);
 digitalWrite(2,LOW);
 digitalWrite(3,HIGH);
 delay(delay_time);
           /// A
 digitalWrite(0,HIGH);
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,LOW);
 delay(delay_time);
           /// B
 digitalWrite(0,HIGH);
 digitalWrite(1,LOW);
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH);
 delay(delay_time);
           /// C
 digitalWrite(0,HIGH);
 digitalWrite(1,HIGH);
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 delay(delay_time);
           /// D
 digitalWrite(0,HIGH);
 digitalWrite(1,HIGH);
 digitalWrite(2,HIGH);
 digitalWrite(3,HIGH);
 delay(delay_time);
}
