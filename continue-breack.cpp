#include <iostream>
using namespace std;

int main(){
    // for(int i=0; i<=10; i++){
    //     if(i%2==0){
    //         continue;
    //     }
    //     cout<<"This is sum number\n";
    // }

    // ===== check prime number or not ====== 

    int number,i;
    cout<<"Please enter number which you want check prime or not:";
    cin>>number;
    
    for(i=2; i<number; i++){
        if(number%i==0){
            cout<<"Not prime\n";
            break;
        }
    }

    if(i==number){
        cout<<"Its prime number\n";
    }
    return 0;
}