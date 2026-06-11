/*pattern
A
B A
C B A
D C B A
*/
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter no.of rows"<<endl;
    cin>>n;
    int row=1;
     
    while(row<=n)
    {
        int col=1;
      
        while(col<=row){
            char c='A'+row-col;
            cout<<c<<" ";
            
            col=col+1;
        }
        cout<<endl;
        
        row=row+1;
        
        }
return 0;
}