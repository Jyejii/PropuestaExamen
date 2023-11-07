#include <iostream>
#include <stdio.h>
#include <math.h>

int main() {
    int a ;
    int b;
    int c;
    for ( a= 1; a <= 8;a++) {
        for (b=a; b<=17;b++){
            c =sqrt(a*a+b*b);

            if( c<= 17 ){
                if( a*a+b*b==c* c && a+ b>c && a + c > b && b + c > a){
                    std::cout<< a << "-" << b <<"-"<< c <<std::endl;
                }
            }
        }
    }
    return 0;
}
