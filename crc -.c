#include <stdio.h>
#include <string.h>

int main(){

    char r[50], dvd[100], dvs[50], code[100];
    int dvdlen, dvslen, a;

    printf("Dividend: ");
    scanf("%s", dvd);
    printf("Divisor: ");
    scanf("%s", dvs);

    dvdlen = strlen(dvd);
    dvslen = strlen(dvs);
    dvd[dvslen] = '\0';
    r[dvslen] = '\0';

    strcpy(code, dvd);
    for(a = 0; a < dvslen - 1; a++){
        code[dvdlen + a] = '0';
    }

    for(int b = 0; b < dvdlen; b++){
        if(code[b] != '0'){
            for(int c = 0; c < dvslen; c++){
                r[c] = code[b + c] = (code[b + c] == dvs[c]) ? '0' : '1';
            }
        }
    }
    printf("\nCRC: %s\n", r);

    for(int a = 0; a < dvslen; a++){
        r[a] = r[a+1];
    }

    printf("Data Transmitted: %s", strcat(dvd, r));

    return 0;
}