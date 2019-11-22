const int trig=12;
const int echo=11;
const int leftforward=2;
const int rightforward=4;
const int rightbackward=5;
const int leftbackward=3;

int distance =0;
int duration =0;
void setup() {

  pinMode(trig,OUTPUT);
  pinMode(echo,OUTPUT);
  pinMode(leftforward,OUTPUT);
  pinMode(rightforward,OUTPUT);
  pinMode(leftbackward,OUTPUT);
  pinMode(rightbackward,OUTPUT);

Serial.begin(9600);

}
