#include <iostream>


using namespace std;


void sign (int n);
int gcd(int a, int b);

int main()

{
    int x,y;
    cout<< "enter 2 numbers to find GCF "<<endl;
    cin>>x;
    cin>>y;
    
    cout<<endl<<endl<<endl;
  
    
    cout<<"the greatist common factor of the two number is "<< gcd(x,y)<<endl<<endl<<endl<<endl;
    
      sign (4);
    
    system ("PAUSE");
    return 0;
}
//
void sign (int n)
{
   
       if  (n>0)
       {
           cout<<"No parking "<<endl;
           sign(n-1);
           
       }
    

    
}


int gcd(int a, int b)
{
    if (a == 0) // if one number is zero, we know the greatist common factor is the other number
        return b; // returns the other number
    else
        return gcd(b % a, a); // it finds the GCF of the remainder of the 2 numbers and one of the orginal numbers 
}
