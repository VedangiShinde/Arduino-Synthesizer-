//Simple Arduino Synthesizer 
int buttonOne=3;
int soundOut=13;

void setup() {
// put your setup code here, to run once:
pinMode(buttonOne, INPUT_PULLUP);
pinMode(soundOut, OUTPUT);
}
void loop() {
// put your main code here, to run repeatedly:
if (digitalRead(buttonOne) == LOW)
tone(soundOut,110,10);
}