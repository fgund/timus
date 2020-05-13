#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::vector<int> teacher, student;
    int n, m;
    int tmp;
    cin>>n;
    teacher.reserve(n);
    for(int i = 0; i < n; i ++ ){
        cin>>tmp;
        teacher.emplace_back(tmp);
    }
    cin>>m;
    student.reserve(m);
    for(int i = 0; i < m; i ++ )    {
        cin>>tmp;
        student.emplace_back(tmp);
    }
    int counter{0};
    for (auto s : student) {
        if (std::binary_search(teacher.begin(), teacher.end(), s)) {
            ++counter;
        }
    }
    cout << counter;
    return 0;
}