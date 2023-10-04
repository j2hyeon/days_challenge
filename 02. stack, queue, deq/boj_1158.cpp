#include <iostream>
#include <queue>

using namespace std;

int main()
{
    int n, k; // n 명의 사람, k번째 제거
    int to_back;
    queue<int> qq;

    // 입력
    cin >> n >> k;

    for (int i = 1; i <= n; i++)
    {
        qq.push(i); // deque배열에 각 사람을 push
    }

    cout << "<";
    while (qq.size() > 1)
    { // k번쨰의 원소가 front되도록 앞의 원소들 뒤로 push
        for (int i = 1; i <= k - 1; i++)
        {
            to_back = qq.front();
            qq.push(to_back);
            qq.pop();
        }
        cout << qq.front() << ", "; // 빈칸 주의..
        qq.pop();
    }

    // qq.size()가 1이면
    cout << qq.front() << ">";
    return 0;
}