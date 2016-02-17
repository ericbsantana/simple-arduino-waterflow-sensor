float flow;    // Variable to storage the L/min value
int rpm;
int signalPin = 2;

void setup() {
  //Initializes serial
  Serial.begin(9600);

  // Pin 2 will work as interrupt
  pinMode(signalPin, INPUT);
  attachInterrupt(0, incRPM, RISING);
}

void loop() {
  rpm = 0; //
  sei();          //Enable interrupt pin
  delay(750);
  cli();          //Disable interrupt pin

  // Converts to L/min
  flow = (rpm / 5.5);

  // Prints data on serial
  Serial.print(flow);
  Serial.println(" L/min");

}

void incRPM () {
  rpm++; //Increments RPM variable
}


