#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Employee
{
    int score1;
    int score2;
};
bool Compare(Employee e1, Employee e2)
{
    return e1.score1 < e2.score1;
}

int main()
{
    int T;
    scanf("%d", &T);
    vector<Employee> employees;
    vector<int> result;

    for (int t = 0; t < T; t++)
    {
        int N;
        scanf("%d", &N);
        for (int n = 0; n < N; n++)
        {
            int score1, score2;
            scanf("%d %d", &score1, &score2);
            employees.push_back({score1, score2});
        }

        // 1. 서류심사 성적으로 먼저 지원자를 정렬한다.
        sort(employees.begin(), employees.end(), Compare);
        int minScore2 = employees[0].score2;
        int passer = 1;

        for (int i = 1; i < N; i++)
        {
            // 2. minScore2 값에 N번째 지원자 중 가장 면접 점수가 높은 점수를 저장
            // 3. N번째 지원자가 N번째 지원자 중 가장 면접 점수가 높다면 합격
            if (employees[i].score2 < minScore2)
                passer++;
            minScore2 = min(minScore2, employees[i].score2);
        }
        result.push_back(passer);
        employees.clear();
    }

    for (int t = 0; t < T; t++)
        printf("%d \n", result[t]);

    return 0;
}
