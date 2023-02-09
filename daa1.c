#include <stdio.h>
#include <math.h>
double f1(int i){
    return pow((3.0/2.0),i);
}
double f2(int i){
    return pow(i,3);
}
double f3(int i){
    return i;
}
double f4(int i){
    return pow(2,i);
}
double f5(int i){
    return log(i);
}
double f6(int i){
    return (i*(log(i)));
}
double f7(int i){
    return (i *(pow(2,i)));
}
double f8(int i){
    return (pow(log(i),2));
}
double f9(int i){
    return ((log(i)/log(2)));
}
double f10(int i){
    return (i*(log(i)/log(2)));
}
int main()
{
    printf("input | f1 | f2 | f3 | f4 | f5 | f6 | f7 | f8 | f9 | f10 |\n");
    for(int i=0;i<101;i++){
        //printf("%3d-->  %.2f  %.2f  %.2f  %.2f  ",i,f1(i),f2(i),f3(i),f4(i));
         printf(" %d    ",i);
         printf("%.2f   ", f1(i));
         printf("%.2f   ", f2(i));
         printf("%.2f   ", f3(i));
         printf("%.2f   ", f4(i));
         printf("%.2f   ", f5(i));
         printf("%.2f   ", f6(i));
         printf("%.2f   ", f7(i));
         printf("%.2f   ", f8(i));
         printf("%.2f   ", f9(i));
         printf("%.2f\n  ", f10(i));
    }

    return 0;
}
