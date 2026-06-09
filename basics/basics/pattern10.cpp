/* pattern 
A B C
A B C   
A B C
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
            char c='A'+col-1;
            cout<<c<<" ";
            col=col+1;
            
        }
        cout<<endl;
        
        row=row+1;
        
        }
return 0;
}