#include<stdio.h>
#include<math.h>

/*sender func*/
int sender(int arr[10], int f){

    /*sender dec int*/
    int cs, a;
    int sum = 0;

    printf("\n--Sender--\n");
    for(a = 0; a < f; a++)
    sum += arr[a];
    printf("Sum: %d", sum);

    /*one's complement sender*/
    cs =~ sum;
    printf("\nChechsum: %d", cs);
    return cs;
}

/*receiver func*/
void receiver(int arr[10], int f, int send){

    /*receiver dec int*/
    int cs, a;
    int sum = 0;
    
    printf("\n\n--Reciever--\n");
    for(a = 0; a < f; a++)
    sum += arr[a];
    printf("Sum: %d", sum);

    /*complement receiver func*/
    sum = sum + send;
    cs =~ sum;
    printf("\nChecksum: %d", cs);
}

/*main ask size and elements of array*/
void main(){
    int f,send;
    
    /*size*/
    printf("Size: ");
    scanf("%d", &f);
    int arr[n];

    /*element arrays*/
    printf("Elements--\n");
    for(int a = 0; a < f; a++){
        scanf("%d", &arr[i]);
    }
    
    /*call functions*/
    send = sender(arr, f);
    receiver(arr, f, send);
}