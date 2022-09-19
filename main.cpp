#include <Arduino.h>


//Code executé lorsque la carte s'allume
void setup() {
  //temps de connexion
  Serial.begin(9600);
  //print dans le terminal "oklm" pour verifier la connexion
  Serial.println("oklm");
  //initialiser les pin 6,10,11 comme des courant entrants
  pinMode(6, OUTPUT); 
  pinMode(10, OUTPUT); 
  pinMode(11, OUTPUT); 
}

//Code executé en permanence
void loop() {
  digitalWrite(6, HIGH); //put la lumière relié a la pin 6 ON
  digitalWrite(10, LOW); //put la lumière relié a la pin 10 OFF
  digitalWrite(11, LOW); //put la lumière relié a la pin 11 OFF

  delay(1000); //Delai de 1 seconde
 
  digitalWrite(6, LOW); //put la lumière relié a la pin 6 OFF
  digitalWrite(10, HIGH); //put la lumière relié a la pin 10 ON
  digitalWrite(11, LOW); //put la lumière relié a la pin 11 OFF

  delay(1000); //Delai de 1 seconde

  digitalWrite(6, LOW); //put la lumière relié a la pin 6 OFF
  digitalWrite(10, LOW); //put la lumière relié a la pin 10 OFF
  digitalWrite(11, HIGH); //put la lumière relié a la pin 11 ON

  delay(1000); //Delai de 1 seconde
}