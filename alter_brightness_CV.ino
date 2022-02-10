#include <cvzone.h>

SerialData serialData(1,3); //(numOfValsRec,digitsPerValRec)

/*0 or 1 - 1 digit
0 to 99 -  2 digits 
0 to 999 - 3 digits 
 */

int valsRec[1];
int pwmPin = 6;

void setup() {
  serialData.begin(); 
 pinMode(pwmPin, OUTPUT);
}

void loop() {
    serialData.Get(valsRec);
    analogWrite(pwmPin, valsRec[0]);
    delay(30);
    
  delay(50);

}
