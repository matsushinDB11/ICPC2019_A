/** @file main.cpp @brief 2019年ACM ICPC国内予選問題 A問題
 * @author Shintaro Matsumoto
 * @date 2020/12/11 新規作成
 * @see https://icpc.iisf.or.jp/past-icpc/domestic2019/problems/ja/contest/all_ja.html
 * 最新版: https://github.com/matsushinDB11/GPprog_Enshu2
 */

#include <iostream>
#include <fstream>
using namespace std;

int sum_of_array(int x[]){
    int sum = 0;
    int size_of_array = sizeof(x) / sizeof(x[0]);
    for (int i = 0; i < size_of_array; ++i) {
        sum += x[i];
    }
    return sum;
}

int main() {
    ifstream fin;
    fin.open("input_file.txt");
    if (!fin) {
        cout << "Can't file open" << endl;
        return 1;
    }
    while (true){
        int num_of_students, num_of_subjects;
        fin >> num_of_students;
        fin >> num_of_subjects;
        // 入力が2つの0だった場合終了
        if (num_of_students == 0 && num_of_subjects == 0) break;
        //
        int total_score_of_each_student[num_of_students];
        for (int i = 0; i < num_of_students; ++i) {
            int points_array[num_of_subjects];
            for (int j = 0; j < num_of_subjects; ++j) {
                fin >> points_array[j];
            }
            // 各生徒の合計点
            int sum_of_point = sum_of_array(points_array);
            total_score_of_each_student[i] = sum_of_point;
            cout << sum_of_point << endl;
        }
    }
    fin.close();
    return 0;
}
