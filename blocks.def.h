//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		            /*Update Interval*/  /*Update Signal*/
	{" ",           "dwm_memory",	                            30,	    	        0},
	{"",            "dwm_volume",                  		    0,	    	        10},
	{"",            "dwm_datetime",      		    5,	    	        0},
};

//sets delimiter between status commands. NULL character ('\0') means no delimiter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
