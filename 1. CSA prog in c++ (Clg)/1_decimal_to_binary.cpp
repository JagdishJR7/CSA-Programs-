// write a program to convert a no. in From "decimal to binary" :- 
// decimal - 1,2,3,......
// binay --- 1010101001010101.....

#include <iostream>
using namespace std;

int main(){
    int A[20],n,i=0,j;
    cout<<"Enter the 'Decimal' number :";
    cin>>n;
    while (n > 0){
        A[i] = n % 2;
        n = n /2;
        i++;
    }
    for( j=i-1; j>=0; j--){
        cout<<A[j];
    }
    return 0;
}


