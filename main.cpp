#include "libs/analog.h"
#include "libs/LCD.h"

int main(void) {
float lm35var1, lm35var2,lm35V,temp;
LCD lcd(1, 0, 2, 3, 4,5);

    while(1) {
       lm35var1=( float )analogRead(1)*5/1023; 
       lm35var2=(float)analogRead(0)*5/1023;
       lm35V=lm35var2-lm35var1;
       temp=lm35V*100;
       lcd.print(temp);
       lcd.clear();
    }

    return 0;
}