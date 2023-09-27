#include <iostream>
#include <map>
using namespace std;

int count(map<string, int> &cl)
{
    int numb = 1;
    // type가 가진 (value값 +1) * (value값 +1) * ..
    for (auto it = cl.begin(); it != cl.end(); it++)
    {
        numb *= (it->second) + 1;
    }
    // 알몸인 경우 -1
    return numb - 1;
}

int main()
{
    int t, n; // t개의 testcase[0,30], n개의 의상[1,20]
    string a, b;

    // 입력
    cin >> t;

    while (t--)
    {

        map<string, int> cl;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a >> b;
            cl[b]++; // b타입의 옷 + 1
        }
        // 연산 & 출력

        cout << count(cl) << '\n';
    }
}