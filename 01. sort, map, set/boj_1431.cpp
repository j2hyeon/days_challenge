#include <iostream>
#include <algorithm> // sort함수 이용
#include <string>

using namespace std;

int sumNum(string a)
{
    int count = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if ('0' <= a[i] && a[i] <= '9')
        {
            count += a[i] - '0';
        }
    }
    return count;
}

bool compare(string a, string b)
{
    if (a.length() != b.length()) // 길이가 다르다면
    {
        return a.length() < b.length();
    }
    else
    { // 길이가 같다면
        if (sumNum(a) != sumNum(b))
        {                                 // 숫자의 합이 다르다면
            return sumNum(a) < sumNum(b); // 숫자가 적은 순부터
        }
        else
        { // 숫자의 합이 같다면 사전순으로
            return a < b;
        }
    }
}

int main()
{
    int n; // 입력받을 시리얼 넘버 개수
    string arr[100];

    // 입력
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 연산
    // sort함수(배열이름 , 배열이름 + 배열size,비교함수)
    sort(arr, arr + n, compare);

    // 출력
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << '\n';
    }
}