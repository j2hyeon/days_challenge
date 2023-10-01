// dequeue : 동그라미queue
// https://www.acmicpc.net/problem/10866
#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // 시간 단축
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n; // 명령의 수 [1,10000]
    deque<int> dq;

    // 입력 && 출력
    cin >> n;
    while (n--)
    {
        string input;
        int insert_num;

        cin >> input;
        if (input == "push_front")
        {
            cin >> insert_num;
            dq.push_front(insert_num);
        }
        else if (input == "push_back")
        {
            cin >> insert_num;
            dq.push_back(insert_num);
        }
        else if (input == "pop_front")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
                dq.pop_front();
            }
        }
        else if (input == "pop_back")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
                dq.pop_back();
            }
        }
        else if (input == "size")
        {
            cout << dq.size() << '\n';
        }
        else if (input == "empty")
        {
            cout << dq.empty() << '\n';
        }
        else if (input == "front")
        {
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.front() << '\n';
            }
        }
        else
        { // back을 입력한 경우
            if (dq.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << dq.back() << '\n';
            }
        }
    }
}