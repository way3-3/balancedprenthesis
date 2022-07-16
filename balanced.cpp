#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define  fst  ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
string balanced(string s)
{
    stack<char>st;
    for(auto x:s)
    {
        if(st.empty()) st.push(x);
        else if(st.top()=='('&&x==')'||st.top()=='{'&&x=='}'||st.top()=='['&&x==']')
            st.pop();
        else
            st.push(x);
    }
    if(st.empty()) return "YES";
    else return "NO";
}

int main()
{fst
int t;
cin>>t;
while(t--)
{
    string s;
    cin>>s;
    cout<<balanced(s)<<'\n';
}
    return 0;
}
