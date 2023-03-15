#include <iostream>
#include <math.h>
using namespace std;
int main(){


    int num,i=0,rem,result=0;
    cout<<"Enter the 'octal' Number :";
    cin>>num;

    while( num!=0){
        rem = num % 10;
        num = num / 10;
        result += rem * pow(8,i);
        
        i++;
    }
cout<<"decimal no. is :"<<result;
}