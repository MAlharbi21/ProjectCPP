#include <iostream>

bool isPrime(int num){



    for(int i=2;i*i<=num;i++){
        if(num% i==0){
            return false;
        }
    }

    return true;
}

int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    if(isPrime(number)){
       cout<<number<<"yes it is a prime number" <<endl;
    }
    else{
        std::cout <<number<<"no it is not a prime number"<<endl;
    }

    return 0;
}
