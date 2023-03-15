#include <iostream>
#include <string>
using namespace std;

int main(){
   string binaryNumber;

   cout<<"Enter the binary Number :";
   cin>>binaryNumber;

   for(int i=0; i<binaryNumber.length(); i++){
        if(binaryNumber[i]=='0'){
            binaryNumber[i]='1';
        }
        else{
            binaryNumber[i]='0';
        }
   } 

   for(int i=binaryNumber.length()-1; i>=0; i--){
        if(binaryNumber[i]=='0'){
            binaryNumber[i]='1';
            break;
        }
        else {
            binaryNumber[i]='0';
        }
   }
   
   cout<<"2s complement is :"<<binaryNumber<<endl;
   return 0;
}