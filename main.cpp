/** @file main.cpp @brief 2019年ACM ICPC国内予選問題 A問題
 * @author Shintaro Matsumoto
 * @date 2020/12/11 新規作成
 * @see https://icpc.iisf.or.jp/past-icpc/domestic2019/problems/ja/contest/all_ja.html
 * 最新版: https://github.com/matsushinDB11/GPprog_Enshu2
 */

#include <iostream>
#include <algorithm>
using namespace std;

int sum_of_array(int x[], int size_of_array){
    int sum = 0;
//    int size_of_array = sizeof(x) / sizeof(x[0]);
    for (int i = 0; i < size_of_array; ++i) {
        sum += x[i];
    }
    return sum;
}

int main() {
    while (true){
        int num_of_students, num_of_subjects;
        cin >> num_of_subjects;
        cin >> num_of_students;
        // 入力が2つの0だった場合終了
        if (num_of_students == 0 && num_of_subjects == 0) break;
        int total_score_of_each_student[num_of_students];
        for (int i = 0; i < num_of_students; ++i) {
            int points_array[num_of_subjects];
            for (int j = 0; j < num_of_subjects; ++j) {
                cin >> points_array[j];
            }
            // 各生徒の合計点
            int sum_of_point = sum_of_array(points_array, num_of_subjects);
            total_score_of_each_student[i] = sum_of_point;
            cout << sum_of_point << endl;
        }
                int max_sum_of_point = *max_element(total_score_of_each_student, total_score_of_each_student + num_of_students);
                cout << "*" << max_sum_of_point << endl;
    }
    return 0;
}
