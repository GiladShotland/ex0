#include<stdio.h>
#include"myMath.h" 
float add(float x,float y);
float sub(float x, float y);
double mul (double x , int y);
double div (double x, int y);
float add(float x,float y){
    return x + y ;
}

float sub(float x, float y){
    return x - y ;
}

double mul (double x , int y){
    return ((double)y) * x ;
}

double div (double x, int y){
    if( y == 0){
        printf("dividing be zero is undefind");
        return -1;
    }
    return x/((double)y);
}

