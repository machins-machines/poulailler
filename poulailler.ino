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
#include "configuration.h" 
 
//// States
//void led_on();
//void led_off();
//
//// State pointer
//void (*statefunc)() = led_on;
//
//// Global variables
//int x = 0;    // variable
// 
//// Routines
//void led_on()
//{
//  Serial.print("I'm on.\n");       // prints a label
//  statefunc = led_off;
//}
//
//void led_off()
//{
//  Serial.print("I'm off.\n");       // prints a label
//  statefunc = led_on;
//}

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
  //(*statefunc)();
  Serial.print("Try again !\n");
  delay(2000);
}

