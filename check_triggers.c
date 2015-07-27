//This program checks the status of the triggers, used for testing.

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include <fcntl.h> //define O_WRONLY and O_RDONLY

#define SYSFS_ADC_DIR1 "/sys/devices/ocp.3/helper.29/AIN4" //W_Trig1
#define SYSFS_ADC_DIR2 "/sys/devices/ocp.3/helper.29/AIN5" //W_Trig2
#define SYSFS_ADC_DIR3 "/sys/devices/ocp.3/helper.29/AIN6" //W_Trig3
#define SYSFS_ADC_DIR4 "/sys/devices/ocp.3/helper.29/AIN4" //W_Trig4

int main(int argc, char** argv) {

    double W_Trig_thresh = 1300.;
    
    //Create the variables used for ADC conversion
    char ch[4];
    int a,b,c,d;
    int fd;
    int W_Trig;

    int channel = atoi(argv[1]);
    
    //Check the triggers
	if(channel == 1) {
	        fd = open(SYSFS_ADC_DIR1,O_RDONLY);
	}
	else if (channel == 2) {
		fd = open(SYSFS_ADC_DIR2,O_RDONLY);
	}
	else if (channel == 3) {
		fd = open(SYSFS_ADC_DIR3,O_RDONLY);
	}
	else if (channel == 4) {
		fd = open(SYSFS_ADC_DIR4,O_RDONLY);
	}
	read(fd,ch,4);
	a = ch[0] - '0';
	b = ch[1] - '0';
	c = ch[2] - '0';
	d = ch[3] - '0';
	if(d >= 0 && c >= 0 && b >= 0) {
		W_Trig = a*1000 + b*100 + c*10 + d;
	}
	if(d < 0 && c >= 0 && b >= 0) {
	        W_Trig = a*100 + b*10 + c;
	}
	close(fd);
        
	if (W_Trig > W_Trig_thresh) {
	   	printf("1");
		return 0;
	}
	else{
                printf("0");
		return 0;
	}

}
