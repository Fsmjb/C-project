// Octal to binery converter 
#include <iostream>
using namespace std;

void con(int x){
   int  ans[3] = { 0, 0,0 };
   int  y = 2 ;
   if (x == 0){
     y = 0;
    while(y<=2){
	cout << ans[y];
    ++y;
	}
   }
   if (x >= 1){
    while(x>= 2){
        ans[y] = x % 2;
        x /=2;
        --y;
     }
    ans[y]= 1;
   y = 0;
   while(y<=2){
	cout << ans[y];
   ++y;
	}
   }

}
int main(){
    
    char oct [100];

    cout << "Enter the number of base 8 : ";
    cin >> oct;

    int a = 0;
    

   while (a < 100)
    {
        int x;
        if(oct[a] == '\0' ){
            break;
        }
        x = oct[a] - '0';

        if ( x >= 0 && x <= 7 ){
            con(x);
        }
        else{
            cout <<  "\r" <<"you enter the wrong value " << endl;
            break;
        }
     
      ++a;
       
    }
    return 0;
}
