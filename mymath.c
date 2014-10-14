#include<stdio.h>
int x;
int MyPower(int x, int y){
    int z = x, i;
    for(i = 1; i < y; i++){
        z = z*x;
    }
    return z;
}
