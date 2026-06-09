/*pattern
A
B B
C C C
D D D D
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of rows"<<endl;
    cin>>n;
    int row=1;
    int count=1;
    while(row<=n)
    {
        int col=1;
       
        while(col<=n){
            char c='A'+row-1;
            cout<<c<<" ";
            col=col+1;
            
        }
        cout<<endl;
        
        row=row+1;
        
        }
return 0;
}