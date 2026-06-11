/*pattern
A
B C
D E F
G H I J
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of rows"<<endl;
    cin>>n;
    int row=1;
     char count='A';
    while(row<=n)
    {
        int col=1;
      
        while(col<=n){
            cout<<count<<" ";
            count=count+1;
            col=col+1;
        }
        cout<<endl;
        
        row=row+1;
        
        }
return 0;
}