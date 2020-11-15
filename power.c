#include<stdio.h>
#include"myMath.h" 
#define E 2.71828 //Euler's constant
double Power(double x, int y);
double Exponent (int x);
int myfloor (double x);
double Exponent (int x) {
    
    return Power (E,x); 
}
double Power(double x, int y){
    double ans = x;
    if (y == 0) {return 1;}
    if (y < 0 ){
        int temp = y * (-1);
        int i;
        
        for(i = 1; i < temp ; i++){
            ans *= x;
        }
        return 1/ans; //definition of negative appraiser 
    }
    else{
        int i;
        for(i = 1 ; i < y ;i++){
            ans *= x;
        }
        return ans;
        
    }

}
int myfloor (double x){
    int ans = (int) x;
    if (ans > x){ // if x is negative casting will return upper value
        ans = ans -1;

    }
    return ans;
}
