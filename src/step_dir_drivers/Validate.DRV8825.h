// DRV8825 stepper driver validate

#if AXIS1_DRIVER_MODEL == DRV8825
  #if AXIS1_DRIVER_MICROSTEPS != 1 && AXIS1_DRIVER_MICROSTEPS != 2 && AXIS1_DRIVER_MICROSTEPS != 4 && AXIS1_DRIVER_MICROSTEPS != 8 && AXIS1_DRIVER_MICROSTEPS != 16 && AXIS1_DRIVER_MICROSTEPS != 32
    #error "Configuration: AXIS1_DRIVER_MICROSTEPS; DRV8825 invalid micro-step mode, use: 32,16,8,4,2,or 1"
  #endif
  #if HAL_PULSE_WIDTH < DRV8825_PULSE_WIDTH
    #error "Configuration: STEP_WAVE_FORM PULSE; Pulse width is below the DRV8825 stepper driver specifications."
  #endif
#endif
#if AXIS2_DRIVER_MODEL == DRV8825
  #if AXIS2_DRIVER_MICROSTEPS != 1 && AXIS2_DRIVER_MICROSTEPS != 2 && AXIS2_DRIVER_MICROSTEPS != 4 && AXIS2_DRIVER_MICROSTEPS != 8 && AXIS2_DRIVER_MICROSTEPS != 16 && AXIS2_DRIVER_MICROSTEPS != 32
    #error "Configuration: AXIS2_DRIVER_MICROSTEPS; DRV8825 invalid micro-step mode, use: 32,16,8,4,2,or 1"
  #endif
  #if HAL_PULSE_WIDTH < DRV8825_PULSE_WIDTH
    #error "Configuration: STEP_WAVE_FORM PULSE; Pulse width is below the DRV8825 stepper driver specifications."
  #endif
#endif
#if AXIS1_DRIVER_MICROSTEPS_GOTO != OFF
  #if AXIS1_DRIVER_MODEL == DRV8825
    #if AXIS1_DRIVER_MICROSTEPS_GOTO != 1 && AXIS1_DRIVER_MICROSTEPS_GOTO != 2 && AXIS1_DRIVER_MICROSTEPS_GOTO != 4 && AXIS1_DRIVER_MICROSTEPS_GOTO != 8 && AXIS1_DRIVER_MICROSTEPS_GOTO != 16 && AXIS1_DRIVER_MICROSTEPS_GOTO != 32
      #error "Configuration: AXIS1_DRIVER_MICROSTEPS_GOTO; DRV8825 invalid micro-step mode, use: 32,16,8,4,2,1,or OFF"
    #endif
  #endif
#endif
#if AXIS2_DRIVER_MICROSTEPS_GOTO != OFF
  #if AXIS2_DRIVER_MODEL == DRV8825
    #if AXIS2_DRIVER_MICROSTEPS_GOTO != 1 && AXIS2_DRIVER_MICROSTEPS_GOTO != 2 && AXIS2_DRIVER_MICROSTEPS_GOTO != 4 && AXIS2_DRIVER_MICROSTEPS_GOTO != 8 && AXIS2_DRIVER_MICROSTEPS_GOTO != 16 && AXIS2_DRIVER_MICROSTEPS_GOTO != 32
      #error "Configuration: AXIS2_DRIVER_MICROSTEPS_GOTO; DRV8825 invalid micro-step mode, use: 32,16,8,4,2,1,or OFF"
    #endif
  #endif
#endif