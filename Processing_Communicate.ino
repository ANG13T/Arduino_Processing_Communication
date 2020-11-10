
//Declare variables
int led = 7;  
int button1 = 5;
int button2 = 6;
int button3 = 7;
int pot = A0;   
int pot_output;    

void setup ( ) {

pinMode(led, OUTPUT); //set led pin as an output
pinMode(button1, INPUT);
pinMode(button2, INPUT);
pinMode(button3, INPUT);
Serial.begin(9600);  // start the serial communication at 9600 baud rate

} 

void loop ( ) { 

pot_output = analogRead (pot); // Reading from the potentiometer

int mapped_output = map (pot_output, 0, 1023, 0, 255); // Mapping the output of potentiometer to 0-255 to be read by the Processing IDE 

if(digitalRead(button1) == LOW && digitalRead(button2) == LOW && digitalRead(button3) == LOW){
Serial.println (mapped_output);     // Sending the output to Processing IDE
} 

//if one of the three buttons are pressed
//send specific color to Processing

if(digitalRead(button1) == HIGH){ 
  Serial.println(255); 
  delay(50);
}

if(digitalRead(button2) == HIGH){
  Serial.println(100);
  delay(50);
}

if(digitalRead(button3) == HIGH){
  Serial.println(60);
  delay(50);
}

delay(50);

}