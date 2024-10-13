#include <iostream>
using namespace std;
void pattern10(int n)
{
    int i, j, k;
    k = n;
    for (i = 0; i < 2 * n + 1; i++)
    {
        if (i < n + 1)
        {
            for (int j = 0; j <= i; j++)
                cout << "*";
        }
        else
        {
            for (int j = k; j > 0; j--)
            {
                cout << "*";
            }
            k--;
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    int i, j, k = 1, z = 0;

    for (i = 1; i <= n; i++)
    {
      
        if (i % 2 != 0)
        {
            for (int j=1;j<=i;j++)
            {
                if(j%2!=0)
                cout << k;
                else
                cout<<z;
            }
        }
        else
        {
            for(int j=1;j<=i;j++)
            {
                if(j%2!=0)
                cout<<z;
                else 
                cout<<k;
              
            }
        }
        cout<<endl;
    }
}
void pattern12(int n)
{
     int i, j, k = 1,z=n+1,m;//if n=4//z=5

    for (i = 0; i <= n; i++)
    {
        k=1;
        for(int j=0;j<i;j++)//number 1st part
        {
            cout<<k;
            k++;
        }
        m=k;
        m--;
        for(int j=0;j<2*(z-1);j++)//spaces
        {
            cout<<" ";
        }
        z-=1;//2
        for(int j=0;j<i;j++)//2nd pattern
        {
           
            cout<<m;
            m--;
        }
       
        cout<<endl;
}
}
void pattern12_strivermethod(int n)
{
     int i, j, k = 1,spaces=2*(n-1),m;//if n=4//z=5

    for (i = 1; i <= n; i++)
    {
        k=1;
        for(int j=1;j<=i;j++)//number 1st part
        {
            cout<<j;
        
        }
       
        for(int j=1;j<=spaces;j++)//spaces
        {
            cout<<" ";
        }
       spaces-=2;
        for(int j=i;j>=1;j--)//2nd pattern
        {
            cout<<j;
        }
       
        cout<<endl;
}
}
void pattern13(int n)
{
    
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    
}
}
void pattern14(int n)
{
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=1;j<=i;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }

}
//skipped 15,16,17 cuz similar
void pattern17(int n)
{
    
    for(int i=1;i<=n;i++)
    {
        char ch='A';
        for(int j=n-i;j>0;j--)//spaces
        {
            cout<<" ";
        }
       
        for(int j=0;j<i;j++)//patterns 1st part
        {
            cout<<ch;
            ch++;
        }
       ch=ch-2;
        for(int j=0;j<i-1;j++)//patterns 2nd part
        {
            cout<<ch;
            ch--;
        }
        cout<<endl;
    }

}
void pattern18(int n)
{   int count = 0;
    char ch='A'+n-1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<ch;
            ch++;
            
        }
        ch=ch-i-1;
        cout<<endl;
    }

}
//skipped 19,20,21 cuz its very simple
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    pattern14(n);
    return 0;
}
//fix123