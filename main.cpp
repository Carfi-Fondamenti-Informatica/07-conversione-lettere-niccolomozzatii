#include <iostream>
#include "lib.h"
using namespace std;
int main(){
   char a=0;
    cin >> a;
    if(lettera(a)==true) {
        cout << a << endl;
    } else if(lettera(a)==false) {
        cout << "errore" << endl;
    }
  return 0;
}
