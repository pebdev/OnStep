// -------------------------------------------------------------------------------------------------
// Pin map for OnStep ESP-Essential Version 1.x (ESP32)

#if defined(ESP32)

// The multi-purpose pins (Aux3..Aux8 can be analog pwm/dac if supported)
#define Aux8                 5      // OK Status LED, Tone

// Misc. pins
#ifndef OneWirePin
  #define OneWirePin       Aux8     // OK Default Pin for OneWire bus
#endif
#define AddonBootModePin    OFF     // OK NOT USED
#define AddonResetPin         2     // OK ESP32 RST

// GPS (UART2)
#define SERIAL_GPS       Serial2
#define SERIAL_GPS_BAUD     9600

// The PEC index sense is a logic level input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin              OFF     // OK NOT USED
#define AnalogPecPin        OFF     // OK NOT USED

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDnegPin          Aux8     // OK Drain
#define LEDneg2Pin         Aux8     // OK Drain
#define ReticlePin         Aux8     // OK Drain

// For a piezo buzzer
#ifndef TonePin
  #define TonePin          Aux8     // OK Tone
#endif

// The PPS pin is a 3.3V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
#define PpsPin                3     // OK PPS time source, GPS for example
#define LimitPin              3     // OK The limit switch sense is a logic level input normally pull high (2k resistor,) shorted to ground it stops gotos/tracking

// Axis1 RA/Azm step/dir driver
#define Axis1_EN             23     // OK Enable
#define Axis1_M0            OFF     // OK NOT USED
#define Axis1_M1            OFF     // OK NOT USED
#define Axis1_M2            OFF     // OK NOT USED
#define Axis1_M3            OFF     // OK NOT USED
#define Axis1_STEP           33     // OK Step
#define Axis1_DIR            32     // OK Dir
#define Axis1_DECAY         OFF     // OK NOT USED
#define Axis1_HOME          OFF     // OK NOT USED

// Axis2 Dec/Alt step/dir driver
#define Axis2_EN         SHARED     // OK Enable pin control shared with Axis1
#define Axis2_M0            OFF     // OK NOT USED
#define Axis2_M1            OFF     // OK NOT USED
#define Axis2_M2            OFF     // OK NOT USED
#define Axis2_M3            OFF     // OK NOT USED
#define Axis2_STEP           25     // OK Step
#define Axis2_DIR            26     // OK Dir
#define Axis2_DECAY         OFF     // OK NOT USED
#define Axis2_HOME          OFF     // OK NOT USED

// For rotator stepper driver
#define Axis3_EN            OFF     // OK NOT USED
#define Axis3_STEP          OFF     // OK NOT USED
#define Axis3_DIR           OFF     // OK NOT USED

// For focuser1 stepper driver
#define Axis4_EN             27     // OK Enable pin
#define Axis4_STEP            4     // OK Step
#define Axis4_DIR             2     // OK Dir

// For focuser2 stepper driver
#define Axis5_EN            OFF     // OK NOT USED
#define Axis5_STEP          OFF     // OK NOT USED
#define Axis5_DIR           OFF     // OK NOT USED

// ST4 interface
#define ST4RAw              OFF     // OK NOT USED
#define ST4DEs              OFF     // OK NOT USED
#define ST4DEn              OFF     // OK NOT USED
#define ST4RAe              OFF     // OK NOT USED

#else
#error "Wrong processor for this configuration!"

#endif
