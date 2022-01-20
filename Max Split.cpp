//Link Problem==>https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/S
#include <iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<algorithm>
using namespace std;
#define ll long long
#define ld long double
#define pi 3.141592653589793238
#define ahmed  ios_base::sync_with_stdio(false);cout.tie(NULL);cin.tie(NULL);
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
int counter[1000001] = {};
int main()
{
    ahmed; ll cl = 0,cm=0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')     cl++;
        if (s[i] == 'R')cl--;
        if (cl == 0)cm++;
    }
    cout << cm << endl;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'L')
            cl++;
        if (s[i] == 'R')
            cl--;
        cout << s[i];
        if (cl == 0)
            cout << endl;
    }
    return 0;
}
//مهما الدنيا إتنيلت ضلمت لازم يبقى عندك زفت أمل و تعرف إن في نور في أخر أم النفق//

        //اهو بنتنيل نستمر ف السعي رغم فقدان الزفت الشغف