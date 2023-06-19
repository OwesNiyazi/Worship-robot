 // right hand code of roboat
 
 #include <Servo.h>
Servo servo1; //Initialize  servo name
Servo servo2; //Initialize  servo name
const int SERVO1_PIN = 9; //Initialize  servo pin
const int SERVO2_PIN = 10; //Initialize  servo name
void setup() {
 Serial.begin(9600); // Initialize serial communication
 servo1.attach(SERVO1_PIN);
 servo2.attach(SERVO2_PIN);
}
void loop() {
 for (int angle = 0; angle <= 360; angle += 5) {
 float radian = angle * (3.14159 / 180.0);
 int servo1_pos = (int)(90 + 60 * sin(radian));
 int servo2_pos = (int)(90 + 60 * cos(radian));
 
 servo1.write(servo1_pos);
 servo2.write(servo2_pos);
 
 Serial.print("Servo 1: ");
 Serial.print(servo1_pos);
 Serial.print(" Servo 2: ");
 Serial.println(servo2_pos);
 
 delay(51);
 }
}

