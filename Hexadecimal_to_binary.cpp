// Octal to binery converter 
#include <iostream>
using namespace std;

void con(int x){
   int  ans[4] = { 0, 0, 0,0};
   int  y ;
   if (x == 0){
     y = 0;
    while(y<=3){
	cout << ans[y];
    ++y;
	}
    }
   else if (x >= 1){
        y = 3;
        while(x>= 2){
        ans[y] = x % 2;
        x /=2;
        --y;
    }
    ans[y]= 1;
    y = 0;
    while(y<=3){
	cout << ans[y];
    ++y;
	}
   }

}
int main(){
    
    char hex [100];

    cout << "Enter the number of base 16 : ";
    cin >> hex;

    int a = 0;
    

   while (a < 100)
    {
        int x = -1;
        if(hex[a] == '\0' ){
            break;
        }
       switch (hex[a])
       {
        case '0': 
        x = 0;
        break;

        case '1': 
        x = 1;
        break;

        case '2': 
        x = 2;
        break;

        case '3': 
        x = 3;
        break;

        case '4': 
        x = 4;
        break;

        case '5': 
        x = 5;
        break;

        case '6': 
        x = 6;
        break;

         case '7': 
        x = 7;
        break;

        case '8': 
        x = 8;
        break;

        case '9': 
        x = 9;
        break;

        case 'A': 
        x = 10;
        break;

        case 'B': 
        x = 11;
        break;

        case 'C': 
        x = 12;
        break;

        case 'D': 
        x = 13;
        break;

        case 'E': 
        x = 14;
        break;

        case 'F': 
        x = 15;
        break;
       
       }

        if ( x >= 0 && x <= 15 ){
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
