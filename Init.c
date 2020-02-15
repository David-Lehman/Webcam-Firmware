/*
 * INit.c
 *
 * Created: 2/9/2020 3:49:59 PM
 *  Author: david
 */ 

 #include "compiler.h"
 #include "board.h"
 #include "conf_board.h"
 #include "gpio.h"
 #include "ioport.h"

 void board_init(void)
 {
 	ioport_init();

 	ioport_set_pin_dir(PIN_LED, IOPORT_DIR_OUTPUT);
 	ioport_set_pin_level(PIN_LED, false);
 }
