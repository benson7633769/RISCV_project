#include <stdio.h>
#include <stdbool.h>
bool isPowerOfFour(int n){
    if(n==0||n<0){
        return false;
    }
    while(n!=1){
        if(n%4!=0){
            return false;
        }
        n/=4;
    }
    return true;
}
int main(void){
    int in;
    bool res;
    in=16;
    res= isPowerOfFour(in);
    printf(res ? "true" : "false");


    return 0;
}
