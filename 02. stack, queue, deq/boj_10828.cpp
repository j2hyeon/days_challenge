#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;            //[1,10000]
    stack<int> stack; // 정수를 담을 stack
    string input;

    // 입력
    cin >> n;
    while (n--)
    {
        int a; // 입력받는 정수
        cin >> input;
        if (input == "push")
        {
            cin >> a;
            stack.push(a);
        }
        else if (input == "pop")
        {
            if (stack.empty())
            {
                cout << -1 << '\n';
            }
            else
            {
                cout << stack.top() << '\n';
                stack.pop();
            }
        }
        else if (input == "size")
        {
            cout << stack.size() << '\n';
        }
        else if (input == "empty") // empty이면 1, 아니면 0
        {
            cout << stack.empty() << '\n';
        }
        else // top을 입력한 경우
        {
            if (!stack.empty())
            {
                cout << stack.top() << '\n';
            }
            else
            {
                cout << -1 << '\n';
            }
        }
    }
}