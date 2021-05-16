#ifndef TINY_TETRIS_CPP_H
#define TINY_TETRIS_CPP_H

#define OLED_ADDRESS	        	0x3C //you may need to change this, this is the OLED I2C address.  
#define OLED_COMMAND	                0x80
#define OLED_DATA	                0x40
#define OLED_DISPLAY_OFF	        0xAE
#define OLED_DISPLAY_ON	                0xAF
#define OLED_NORMAL_DISPLAY	    	0xA6
#define OLED_INVERSE_DISPLAY     	0xA7
#define OLED_SET_BRIGHTNESS	        0x81
#define OLED_SET_ADDRESSING	        0x20
#define OLED_HORIZONTAL_ADDRESSING	0x00
#define OLED_VERTICAL_ADDRESSING	0x01
#define OLED_PAGE_ADDRESSING	        0x02
#define OLED_SET_COLUMN                 0x21
#define OLED_SET_PAGE	                0x22

#define ARRAY_SIZE(array) \
	(sizeof(array) / sizeof(array[0]))

#endif

const int ADC_key_table[5][2] = {
	{0x2a5, 0x2af},		//KEY 0 ADC Value
	{0x120, 0x140}, 	//KEY 1 ADC Value
	{0x210, 0x220}, 	//KEY 2 ADC Value
	{0x280, 0x290}, 	//KEY 3 ADC Value
	{0x2E0, 0x2E5}  	//KEY 4 ADC Value
};

typedef enum {
	KEY_MIDDLE = 0,		//KEY 0
	KEY_LEFT,		//KEY 1
	KEY_RIGHT,		//KEY 2
	KEY_DOWN,		//KEY 3
	KEY_ROTATE,		//KEY 4
	KEY_NOKEY
} key;
