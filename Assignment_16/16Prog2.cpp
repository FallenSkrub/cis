#include <iostream>
using namespace std;
void nonLoop (int counter)
{ 
if(counter == 0)
return;
else{
cout << counter << endl;
nonLoop(--counter);
return;
}
}
int main () {
int x=10;
for (int b = 8; b < 20; b++){
cout << b << endl;
}
}

