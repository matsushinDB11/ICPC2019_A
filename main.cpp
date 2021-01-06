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
        cin >> num_of_students;
        cin >> num_of_subjects;
        // 入力が2つの0だった場合終了
        if (num_of_students == 0 && num_of_subjects == 0) break;
        int total_score_of_each_student[num_of_students];
        int points_array[num_of_subjects][num_of_students];
        for (int i = 0; i < num_of_subjects; ++i) {
            for (int j = 0; j < num_of_students; ++j) {
                // 各教科の得点を入力
                cin >> points_array[i][j];
            }
        }
        // 各生徒の合計点を集計
        int sum_of_points[num_of_students];
        for (int j = 0; j < num_of_students; ++j) {
            int sum_of_point = 0;
            for  (int i = 0; i < num_of_subjects; ++i){
                sum_of_point += points_array[i][j];
            }
            sum_of_points[j] = sum_of_point;
        }
                int max_sum_of_point = *max_element(sum_of_points, sum_of_points + num_of_students);
                cout << max_sum_of_point << endl;
    }
    return 0;
}
