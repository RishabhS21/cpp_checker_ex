#include <bits/stdc++.h>

using namespace std;
const int ch_MAX = 10;
string RandomString(int ch)
{
    char alpha[ch_MAX] = { '0', '1', '2', '3', '4', '5', '6',
                          '7', '8', '9'};
    string result = "";
    result = result + alpha[(rand() % 9) + 1];
    for (int i = 0; i<ch-1; i++)
        result = result + alpha[rand() % ch_MAX];

    return result;
}
int main()
{
srand(time(NULL));
    // int t = 1;
    // cout<<t<<"\n";
    // while(t--){
        int n = 2;
        cout<<n<<"\n";
        
        while(n--){
            int ch = (rand() % 50)+1;
            
            cout<<RandomString(ch) <<"\n";
            int k = (rand() % ch);
            cout<<k<<"\n";
        }
        
    // }
   return 0;
}