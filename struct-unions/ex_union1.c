#include <stdio.h>
#include <string.h>

int main(void){
       
    union data {
        int i;
        float f;
        char str[20];
    };
    
    union data u;
    u.i = 10;
    printf("%d\n", u.i);
    u.f = 220.5;
    printf("%f\n", u.f);
    strcpy(u.str, "Programação C");
    printf("%s\n", u.str);
}
