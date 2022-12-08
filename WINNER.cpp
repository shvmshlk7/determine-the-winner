#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    
    while(t--)
    {
        int p1,p2,q1,q2;
        cin>>p1>>p2>>q1>>q2;
        
        int pa,qa;
        
        pa=max(p1,p2);
        qa=max(q1,q2);
        
        if(pa<qa)
        {
            cout<<"P"<<endl;
        }
        else if (pa>qa)
        {
            cout<<"Q"<<endl;
        }
        else
        {
            cout<<"TIE"<<endl;
        }
        
    }    
	// your code goes here
	return 0;
}
