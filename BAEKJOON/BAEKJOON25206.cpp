#include <iostream>
#include <string>
using namespace std;


int main() {
    string subject, ave; // ���� ����
    float grade, major; // grade ����, major ��������
    float score = 0; // score ���� ��������
    float gradesum = 0; // gradesum ����(grade)�� ����
    float allsum = 0; // (����x��������)�� ��

    for (int i = 0; i < 20; i++) {
        cin >> subject >> grade >> ave;
        if (ave == "P")
            grade = 0;

        gradesum += grade; // ������ ����

        if (ave == "A+")
            score = 4.5;
        else if (ave == "A0")
            score = 4.0;
        else if (ave == "B+")
            score = 3.5;
        else if (ave == "B0")
            score = 3.0;
        else if (ave == "C+")
            score = 2.5;
        else if (ave == "C0")
            score = 2.0;
        else if (ave == "D+")
            score = 1.5;
        else if (ave == "D0")
            score = 1.0;
        else if (ave == "F")
            score = 0.0;
        allsum += (grade * score); //(����x��������)�� ��
    }

    major = allsum / gradesum; // �������� = (����x��������) ���� ������ �������� ���� �� 
    cout << major;

    return 0;
}