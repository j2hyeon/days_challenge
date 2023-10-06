// https://www.acmicpc.net/problem/10757
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string a, b; // int형으로 받을 시 int형 최대 범위 초과

    // 입력
    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<string> sum;
    int up = 0, idx = 0; // up : 자리올림수

    for (int i = 0; i < (a.size() > b.size() ? a.size() : b.size()); i++)
    {
        if (i + 1 <= a.size() && i + 1 <= b.size())
        {
            sum.push_back(to_string((((a[i] - '0') + (b[i] - '0')) + up) % 10));
            up = (((a[i] - '0') + (b[i] - '0')) + up) / 10;
        }
        else if (i + 1 > a.size())
        { // s1이 길이가 더 짧은 정수인 경우
            sum.push_back(to_string(((b[i] - '0') + up) % 10));
            up = ((b[i] - '0') + up) / 10;
        }
        else
        {
            sum.push_back(to_string(((a[i] - '0') + up) % 10));
            up = ((a[i] - '0') + up) / 10;
        }
    }

    reverse(sum.begin(), sum.end());
    if (up != 0)
        cout << up; // 혹시나 마지막 계산에서 자리올림수가 발생한 경우 출력해줘야하니까
    while (1)
    {
        if (sum.size() <= idx)
            break; // 벡터의 끝에 도달했으면 정지
        cout << sum[idx];
        idx++;
    }
}
