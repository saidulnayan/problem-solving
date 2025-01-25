#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
 
   float a,b,c,med;
   cin >> a >> b >> c;
   med = ((a*2)+(b*3)+(c*5))/10;
    
    cout << "MEDIA = " << fixed << setprecision(1) <<med << endl;
    return 0;
}