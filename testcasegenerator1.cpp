#include<bits/stdc++.h>

using namespace std;

int randombw(int a, int b){
    if (a>b)
        swap(a,b);
    
    return a + rand()%(b-a+1);
}
int main(){
    // srand(atoi(argv[1]));
    srand(time(0));
    int t=1;
    cout<<1<<endl;
    while(t--){
        int n = randombw(1,5);
        int b = n*(n-1)/2;
        // cout<<n<<" "<<b<<" ";
        int m = randombw(1,b);
        cout<<n<<" "<<m<<endl;
        int i=0;
        while(i<m){
            int x = randombw(1,n);
            int y = randombw(1,n);
            if(x==y){
                continue;
            }
            else if(x>y){
                swap(x,y);
            }
            cout<<x<<" "<<y<<"\n";
            i++;
        }
    }
    
}
