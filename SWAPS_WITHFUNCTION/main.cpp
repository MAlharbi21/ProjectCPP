#include <iostream>

void swaping(int num1,int num2,){

        temp=num1;
        num1=num2;
        num2=temp;

}


int main(){
    int num1, num2;
    cout<<"Enter a number: ";
    cin>>number;

    if(isPrime(number)){
       cout<<number<<"yes it is a prime number" <<endl;
    }
    else{
        cout <<number<<"no it is not a prime number"<<endl;
    }

    return 0;
}
