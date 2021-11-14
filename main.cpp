#include <iostream>
using namespace std;
int main() {
    int n=0, x=1, y=1, z=0;
    cin>>n;
    while(x<=n) {
        x=y+z;
        z=y;
        y=x;
        if(x<=n) {
            cout<<x<<endl;
        }

    }
    return 0;
}
