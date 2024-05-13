/*  dicemal to binery converter c++  */

#include <iostream>
using namespace std;
int main(){
   int  ans[1000];
   int x, y = 1 ;
   
   cout << "Enter the number you want to conver : ";
   cin >> x;
   if (x >= 1){
    while(x>= 2){
        ans[y] = x % 2;
        x /=2;
        ++y;
     }
    ans[y]= 1;
        while(y>=1){
	    cout << ans[y];
        --y;
	    }
   }
	return 0;
}
