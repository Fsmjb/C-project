#include <iostream>
#include <math.h>
"hello"
using namespace std;

int main(){
char ch[100];
int ans = 0;

cout << "Enter the   binary number " ;
cin >> ch;

  for (int a = 0; a < 100; ++a) {
       if (ch[a] == '\0') {
           break;
           } 
       if ( ch [a] != '0' && ch[a] != '1'){
           cout << "Invalid binary input. Please enter a valid binary number." << endl;
         return 1;
       }
    
       if (ch[a] == '1'){ 
           ans += pow (2,a);
       }
    }
cout <<"Decimal value : " << ans << endl;

return 0;
}
