#define IR  11     // connects the OUT of the IR sensor to pin 11 of the Arduino board

#define REC 8      // connects the REC pin of the ISD1820 to pin 8 of the Arduino board

#define PLAYE 9    // connects the PLAYE pin of the ISD1820 to pin 9 of the Arduino board

#define PLAYL 10    // connects the PLAYL pin of the ISD1820 to pin 10 of the Arduino board

void setup(){

 pinMode(IR, INPUT);   //defines the IR pin of the IR Sensor as input

 pinMode(REC, OUTPUT);    // defines the REC pin of the ISD1820 as output


 Serial.begin(9600);

}

void loop(){

 int i = digitalRead(IR);

 if(i == 0)

 {

   Serial.println("The user waved!");        //the IR sensor detected motion

   digitalWrite(REC, 1);                // a recording of the voice has started

   delay(10000);                        //it will record for 10 seconds

   digitalWrite(REC, 0);               //it stops recording

    delay(1000);                       //it waits 1 second

    digitalWrite(PLAYE, 1);              // the recording is played back

   delay(10000);         

   digitalWrite(PLAYE, 0);              //the recording stops

 }

}
