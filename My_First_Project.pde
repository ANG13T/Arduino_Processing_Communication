import processing.serial.*;    // Importing the serial library to communicate with the Arduino 

Serial myPort;      // Variable for serial communication

float background_color ;   // Variable for changing the background color




void setup ( ) {

size (700,  700);     // setting window size 

printArray(Serial.list()); //print out list of serial ports
myPort  =  new Serial (this, Serial.list()[1],  9600); // Set the com port and the baud rate according to the Arduino IDE (change this to match your serial port)

myPort.bufferUntil ( '\n' );   // Receiving the data from the Arduino IDE

} 

void serialEvent  (Serial myPort) {

background_color  =  float (myPort.readStringUntil( '\n' ) ) ;  // Changing the background color according to received data

} 


void draw ( ) {

background ( 150, 50, background_color );   // Initial background color

}

    