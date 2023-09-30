// queue 기능 구현..x 사용 program
// https://www.acmicpc.net/problem/10845

#include <iostream>
#include <queue>
using namespace std;

int main()
{
    // 시간단축
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; // 명령의 수 [1,10000]
    queue<int> qq;

    // 입력
    cin >> n;

    // 입력 && 연산 && 출력
    while (n--)
    {
        string input;
        int insert_num;

        cin >> input;
        if (input == "push")
        {
            cin >> insert_num;
            qq.push(insert_num);
        }
        else if (input == "pop")
        {
            if (qq.empty()) // qq가 빈 큐일 경우
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << qq.front() << '\n';
                qq.pop(); // pop으로 제거
            }
        }
        else if (input == "size")
        {
            cout << qq.size() << '\n';
        }
        else if (input == "empty")
        {
            cout << qq.empty() << '\n'; // empty -> 1, !empty ->0 0
        }
        else if (input == "front")
        {
            if (qq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << qq.front() << '\n';
            }
        }
        else
        {
            if (qq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << qq.back() << '\n';
            }
        }
    }
}