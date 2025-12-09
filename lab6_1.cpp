#include<iostream>
using namespace std;

int main(){
int evencount = 0;
int oddcount = 0;
int num;

while(true) {



        cout << "Enter an integer: ";
        cin >> num ;


        if(num == 0){
            break;
        }

        if(num %2 == 0) {
            
            evencount++;

        }else {
        
            oddcount++;

        }


    }
        cout << "#Even numbers = "<<evencount<<endl;
        cout << "#Odd numbers = "<<oddcount<<endl;
        return 0;
}
