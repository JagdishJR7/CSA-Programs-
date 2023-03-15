// Write a program to convert "binary" into decimal --
// binary --- 10101010101
// decimal ---- 1,2,3,.....

#include <iostream>
#include <math.h>
using namespace std;

bool isbinary(int num)
{
    while (num)
    {
        if (num % 10 > 1)
            return false;
        num /=10;
    }
    return true;
}

int main(){
    int num,i=0,rem,result=0;
    cout<<"Enter the 'Binary' Number :";
    cin>>num;
    // Checking whether given number is binary or not :
    if(!isbinary(num)){
        cout<<"Invalid input, The entered number is not binary number."<<endl;
        return 0;
    }

    while( num!=0){
        rem = num % 10;
        num = num / 10;
        result += rem * pow(2,i);
        i++;
    }
cout<<"decimal no. is :"<<result;
}

