/**
 * \file poulailler.ino
 * \brief Programme de tests.
 * \author Anatole
 * \version 0.1
 * \date 3 novembre 2016
 *
 * Programme de test pour l'objet de gestion des chaînes de caractères Str_t.
 *
 */
#include "motor.h"
#include "configuration.h"

 
int x = 0;    // variable

/**
 * \fn void setup()
 * \brief appelée une seule fois après un reset.
 *
 */
void setup() {
  Serial.begin(9600);      // open the serial port at 9600 bps:    
  Serial.print("Begin !\n");       // prints a label

}

/**
 * \fn void loop()
 * \brief loop routine.
 * the loop routine runs over and over again forever:
 */
void loop() {  
  // print labels
  Serial.print("Sllut !");       // prints a label
  Serial.print("\t");              // prints a tab
  Serial.println("");      // prints another carriage return
  delay(2000);
}

