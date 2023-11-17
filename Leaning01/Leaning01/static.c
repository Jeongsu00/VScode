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
//    printf("function1() 함수가 %d 번째 호출되었습니다.\n", count);
//    count++;
//}
//
//void static1(){
//
//    static int static_count = 1;                                            // 정적 변수 static은 
//                                                                            // 지역 변수와 전역 변수의 특징을 모두 가지게 된다.
//    printf("static1()   함수가 %d 번째 호출되었습니다.\n", static_count);   // 함수 내에서 선언된 정적 변수는 전역 변수처럼 단 한 번만 초기화되며(최초 실행 시)
//    static_count++;                                                         // 프로그램이 종료되어야 메모리상에서 사라짐
//}                                                                           // 또한, 이렇게 선언된 정적 변수는 지역 변수처럼 해당 함수 내에서만 접근 가능