/*pattern
1
2 1
3 2 1
4 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of rows"<<endl;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n)
    {
        int j=1;
       int value=i;
        while(j<=i){
            cout<<value<<" ";
            value=value-1;
            j=j+1;
            
        }
        cout<<endl;
        i=i+1;
        }
return 0;
}