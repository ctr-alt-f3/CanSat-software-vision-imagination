enum instructions{
//all opcodes for sendInstruction function will be here - TODO
OP_SEND_PHOTO = 2,   //will send the photo from camera
OP_SEND_GPS = 3,     //will send GPS coordinates
OP_DEC_FREQ_OF_DATA_SENDING = 4,  //will decrease frequency of sending data (for example when on ground)
OP_CUT_THE_POWER_CAMERA = 6,
OP_CUT_THE_POWER_TEMPERATURE_SENSOR = 7,
OP_CUT_THE_POWER_GPS = 8,
OP_CUT_THE_POWER_ACCELEROMETR = 9, //and compass, etc.
//DANGEROUS ACTIONS
OP_CUT_THE_POWER_ALL = 0, //WILL COMPLETLY POWER OFF THE CANSAT - idk if it's good to make it's opcode "0"
		OP_CUT_THE_POWER_RADIO = 1,  //WILL COMPLETLY CUT OFF THE COMMUNICATION - dangerous
//DANGEROUS ACTIONS		
OP_INC_FREQ_OF_DATA_SENDING = 5, //normally 1 per second
OP_SEND_BATTERY_STATS = 6,
//DANGEROUS
OP_CHANGE_RADIO_STATS = 7,// power/freq/bandwith
OP_STOP_ADDIONAL_MISSION = 8, //DANGEROUS, NEVER USE THIS
OP_POWER_BUTTON_LED_CHANGE = 9,
OP_RESEND_LAST_INSTRUCTION = 10 //when data transferring isn't ideal, and CHKSUM is invalid
};
