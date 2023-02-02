#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long factorial(int num){
    if(num == 0){
        return 1;
    }
    else{
        return (num*factorial(num-1));
    }
}

int main(){

    printf("Function 1 : n cube\n");
    for(double i=0; i<=100; i++){
        printf("%.0lf\n", pow(i,3));
    }

    printf("Function 2 : log2 n squared\n");
    for(double i=0; i<=100; i++){
        printf("%.3lf\n", pow(log2(i),2));
    }

    printf("Function 3 : e power n\n");
    for(double i=0; i<=100; i++){
        printf("%.3lf\n", exp(i));
    }

    printf("Function 4 : root log2 n\n");
    for(double i=0; i<=100; i++){
        printf("%.3lf\n", pow(log2(i),0.5));
    }

    printf("Function 5 : n log2 n\n");
    for(double i=0; i<=100; i++){
        printf("%.3lf\n", i*log2(i));
    }

    printf("Function 6 : log log n\n");
    for(double i=0; i<=100; i++){
        printf("%.3lf\n", log(log(i)));
    }

    printf("Function 7 : log2 log2 n\n");
    for(double i=0; i<=100; i++){
        printf("%.3lf\n", log2(log2(i)));
    }

    printf("Function 8 : n*(2 power n)\n");
    for(double i=0; i<=100; i++){
        printf("%.3lf\n", i*pow(2,i));
    }

    printf("Function 9 : 2 power 2 power n\n");
    for(double i=0; i<=100; i++){
        printf("%.3lf\n", pow(2, pow(2,i)));
    }

    printf("Function 10 : 2 power log2 n\n");
    for(double i=0; i<=100; i++){
        printf("%.3lf\n", pow(2,log2(i)));
    }

    printf("Function 11 : n!\n");
    for(double i=1; i<=20; i++){
        printf("%ld\n", factorial(i));
    }

    return 0;
}