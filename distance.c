#include<stdio.h>
#include<conio.h>
void main(){
int sp1,sp2,d1,d2=80,d,dis,dd1,dd2;/*sp1=speed of opp vehicle,sp2=speed of our vehicle assume as80(by over speedometer),d,d1=initial distancae,
d2=second distance,dis=distance travel by opp vechile between two ping
dd1=assume after 15s distance travel by our vehicle,dd2=assume after 15s distance travel by opposite vehicle*/

const int trigPin = 2;
const int echoPin = 4;

d=d1=loop();
delay(1000);
d2=loop();

void speed()
    {
        dis=d1-(d2+((sp2*5/18)*(1));
        sp1=dis/1;//delay for 1sec
    }

    
void check()
{
    dd1=sp1*(15); //assume after 15s distance travel by opposite vechicle
    dd2=sp1*(15); //assume after 15s distance travel by our vechicle
    d=d-(dd1+dd2); //remaing distance 
    if(d>30) //check if distance is more than 30m
    {
        printf("possible to over take");
    } 
    else
    printf("not possible");

}
public void setup() {
  // initialize serial communication:
  Serial.begin(9600);
}

public int loop()
{
  // establish variables for duration of the ping, 
  // and the distance result in inches and centimeters:
  long duration, m, cm;

  // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);

  // convert the time into a distance
  cm = microsecondsToCentimeters(duration);
  return m=cm/100;
}


long microsecondsToCentimeters(long microseconds)
{
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the
  // object we take half of the distance travelled.
  return microseconds / 29 / 2;
}