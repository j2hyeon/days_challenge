#include <iostream>
#include <map>
#include <vector>

using namespace std;

// 201 -> 012
int racing(int n, vector<int> &tun_out)
{
    int count = 0; // 추월한 차량의 개수

    // 추월한 후의 상태를 이전 idx 순으로 정렬하며 추월한 차량의 수를 count
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (tun_out[i] > tun_out[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    string car;              // 입력을 받아 전해줄 매개체
    map<string, int> tun_in; // 터널을 들어간 차량num에 idx를 부여한 key-value 쌍의 map 선언
    vector<int> tun_out;     // 터널을 나오는 차량의 idx를 저장

    // 입력
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> car;
        tun_in[car] = i; // value에 순서idx 부여
    }

    for (int i = 0; i < n; i++)
    {
        cin >> car;
        tun_out.push_back(tun_in[car]); // 나온 차량 저장(idx꼴로)
    }

    // 연산 & 출력
    cout << racing(n, tun_out) << '\n';

    return 0;
}