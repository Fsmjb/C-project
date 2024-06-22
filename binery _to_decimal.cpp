#include <iostream>
#include <math.h>

using namespace std;

int main(){
char ch[100];
int ans = 0, num;

cout << "Enter the   binary number " ;
cin >> ch;

  for (int a = 0; a < 100; ++a) {
       if (ch[a] == '\0') {
            num = a;
           break;
           } 

       if ( ch [a] != '0' && ch[a] != '1'){
           cout << "Invalid binary input. Please enter a valid binary number." << endl;
         return 1;
       }
    }
    int b = 0;
    num -= 1;
    for (num; num >= 0; --num){
       if (ch[num] == '1'){ 
           ans += pow (2,b);
       }
       ++b;
    }
cout <<"Decimal value : " << ans << endl;

return 0;
}
