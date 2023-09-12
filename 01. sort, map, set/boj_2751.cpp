// 수 정렬하기 - merge sort
#include <iostream>
#include <vector>
#include <algorithm> //sort함수 이용
using namespace std;

int main()
{
    // 입력
    int n; // 1<= n <= 1,000,000   --> O(n^2)의 알고리즘이라면 시간 초과!
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // 계산
    sort(arr.begin(), arr.end());

    // 출력
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}