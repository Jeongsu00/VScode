//#include <stdio.h>  
//
//void function1(void);
//void static1(void);
//
//int main() {
//
//    for (int i = 0; i < 3; i++) {
//        function1();
//    }
//    printf("\n");
//    for (int j = 0; j < 3; j++) {
//        static1();
//    }
//
//    return 0;
//}
//
//void function1(){
//
//    int count = 1;
//
//    printf("function1() �Լ��� %d ��° ȣ��Ǿ����ϴ�.\n", count);
//    count++;
//}
//
//void static1(){
//
//    static int static_count = 1;                                            // ���� ���� static�� 
//                                                                            // ���� ������ ���� ������ Ư¡�� ��� ������ �ȴ�.
//    printf("static1()   �Լ��� %d ��° ȣ��Ǿ����ϴ�.\n", static_count);   // �Լ� ������ ����� ���� ������ ���� ����ó�� �� �� ���� �ʱ�ȭ�Ǹ�(���� ���� ��)
//    static_count++;                                                         // ���α׷��� ����Ǿ�� �޸𸮻󿡼� �����
//}                                                                           // ����, �̷��� ����� ���� ������ ���� ����ó�� �ش� �Լ� �������� ���� ����