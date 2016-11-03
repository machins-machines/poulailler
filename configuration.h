#ifndef CONFIGURATION_H
#define CONFIGURATION_H
/**
 * \file configuration.h
 * \brief Configuration principale.
 * \author Anatole
 * \version 0.1
 * \date 03 novembre 2016.
 *
 * Main configuration.
 *
 */

// This configuration file contains the basic settings.
// User-specified version info of this build to display in [Pronterface, etc] terminal window during
// startup. Implementation of an idea by Prof Braino to inform user that any changes made to this
// build by the user have been successfully uploaded into firmware.
#define STRING_VERSION_CONFIG_H __DATE__ " " __TIME__ // build date and time
#define STRING_CONFIG_H_AUTHOR "(none, default config)" // Who made the changes.

// SERIAL_PORT selects which serial port should be used for communication with the host.
// This allows the connection of wireless adapters (for instance) to non-default port pins.
// Serial port 0 is still used by the Arduino bootloader regardless of this setting.
#define SERIAL_PORT 0

// This determines the communication speed of the printer
#define BAUDRATE 9600
//#include "Configuration_adv.h"

#endif // CONFIGURATION_H
