#include<bits/stdc++.h>
using namespace std;

#define vvi vector<vi>
#define pii pair<int ,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

void heapify(vi &a,int n,int i)
{
    int max=i;
    int l=2*i+1;
    int r=2*i+2;
    
    if(l<n &&a[l]>a[max])
    {
        max=l;
    }
    
    if(r<n &&a[r]>a[max])
    {
        max=r;
    }
    
     if(max!=i)
     {
         swap(a[i],a[max]);
         
         heapify(a,n,max); 
     }
}

void heapsort(vi &a)
{
    int n=a.size();
    for(int i=n/2-1;i>=0;i--)
    {
        heapify(a,n,i);
        
        for(int i=n-1;i>=0;i--)
        {
            swap(a[0],a[i]);
            
            heapify(a,i,0);
        }
    }
}

signed main()
{
    int n;
    cin>>n;
    
    vi a(n);
    
    rep(i,0,n)
    {
        cin>>a[i];
    }
    
    heapsort(a);
    
    return 0;
}