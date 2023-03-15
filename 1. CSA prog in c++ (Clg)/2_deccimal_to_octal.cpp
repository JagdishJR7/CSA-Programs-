// Write a program to convert no. from " decimal to octal " :-
// most language(english,hindi...) uses base 10 - means : 0,1,2,.....9
// decimal --- 1,2,3,....
// octal ----  base  1 - 8;

#include <iostream>

using namespace std;

int main(){
    int A[20],n,i=0,j;
    cout<<"Enter the 'Decimal' number :";
    cin>>n;
    while (n > 0){
        A[i] = n % 8;
        n = n /8;
        i++;
    }
    for( j=i-1; j>=0; j--){
        cout<<A[j];
    }
    return 0;
}