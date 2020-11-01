/////////////////////codigo:

#include <stdio.h>

void armazenar(){

  //WTF rodou de boa
  int A[1];

  printf("Insira o numero 1:");
  scanf("%d", &A[0]);
  printf("Insira o numero 2:");
  scanf("%d", &A[1]);
  printf("Insira o numero 3:");
  scanf("%d", &A[2]);
  printf("Insira o numero 4:");
  scanf("%d", &A[3]);
  printf("Insira o numero 5:");
  scanf("%d", &A[4]);
  printf("Insira o numero 6:");
  scanf("%d", &A[5]);
  printf("Insira o numero 7:");
  scanf("%d", &A[6]);
  printf("Insira o numero 8:");
  scanf("%d", &A[7]);
  printf("Insira o numero 9:");
  scanf("%d", &A[8]);
  printf("Insira o numero 10:");
  scanf("%d", &A[9]);
  printf("Insira o numero 11:");
  scanf("%d", &A[10]);
  printf("Insira o numero 12:");
  scanf("%d", &A[11]);
  printf("Insira o numero 13:");
  scanf("%d", &A[12]);
  printf("Insira o numero 14:");
  scanf("%d", &A[13]);
  printf("Insira o numero 15:");
  scanf("%d", &A[14]);

  printf("Legal! Agora vou dobrar os numeros e mostra-los na sua ordem:\n");
  printf("%d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n %d\n", 2*A[0], 2*A[1], 2*A[2], 2*A[3], 2*A[4], 2*A[5], 2*A[6], 2*A[7], 2*A[8], 2*A[9], 2*A[10], 2*A[11], 2*A[12], 2*A[13], 2*A[14]);
}

int main(){

  armazenar();

  return 0;
}




/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////Output Codeblocks:
/////////////////////////////////////////////////////////////////////////////////////////////////////////

/*Insira o numero 1:1
Insira o numero 2:2
Insira o numero 3:3
Insira o numero 4:4
Insira o numero 5:
5
Insira o numero 6:6
Insira o numero 7:7
Insira o numero 8:8
Insira o numero 9:9
Insira o numero 10:1
Insira o numero 11:1
Insira o numero 12:1
Insira o numero 13:1
Insira o numero 14:1
Insira o numero 15:1
Legal! Agora vou dobrar os numeros e mostra-los na sua ordem:
2
 4
 6
 8
 10
 12
 14
 16
 18
 2
 2
 2
 2
 2
 2

Process returned -1073741819 (0xC0000005)   execution time : 23.439 s
Press any key to continue.

/////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////Output Repl.it:
/////////////////////////////////////////////////////////////////////////////////////////////////////////

 clang-7 -pthread -lm -o main main.c
main.c:17:16: warning: array index 2 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[2]);
               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:19:16: warning: array index 3 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[3]);
               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:21:16: warning: array index 4 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[4]);
               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:23:16: warning: array index 5 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[5]);
               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:25:16: warning: array index 6 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[6]);
               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:27:16: warning: array index 7 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[7]);
               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:29:16: warning: array index 8 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[8]);
               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:31:16: warning: array index 9 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[9]);
               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:33:16: warning: array index 10 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[10]);
               ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:35:16: warning: array index 11 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[11]);
               ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:37:16: warning: array index 12 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[12]);
               ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:39:16: warning: array index 13 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[13]);
               ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:41:16: warning: array index 14 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  scanf("%d", &A[14]);
               ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:98: warning: array index 1 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...%d\n %d\n %d\n %d\n %d\n %d\n", 2*A[0], 2*A[1], 2*A[2]...
                                               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:106: warning: array index 2 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...%d\n %d\n %d\n %d\n", 2*A[0], 2*A[1], 2*A[2], 2*A[3], 2...
                                             ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:114: warning: array index 3 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...%d\n %d\n %d\n", 2*A[0], 2*A[1], 2*A[2], 2*A[3], 2*A[4]...
                                                ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:122: warning: array index 4 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...%d\n", 2*A[0], 2*A[1], 2*A[2], 2*A[3], 2*A[4], 2*A[5], ...
                                              ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:130: warning: array index 5 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[0], 2*A[1], 2*A[2], 2*A[3], 2*A[4], 2*A[5], 2*A[6]...
                                               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:138: warning: array index 6 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[1], 2*A[2], 2*A[3], 2*A[4], 2*A[5], 2*A[6], 2*A[7]...
                                               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:146: warning: array index 7 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[2], 2*A[3], 2*A[4], 2*A[5], 2*A[6], 2*A[7], 2*A[8]...
                                               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:154: warning: array index 8 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[3], 2*A[4], 2*A[5], 2*A[6], 2*A[7], 2*A[8], 2*A[9]...
                                               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:162: warning: array index 9 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[4], 2*A[5], 2*A[6], 2*A[7], 2*A[8], 2*A[9], 2*A[10]...
                                               ^ ~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:170: warning: array index 10 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[5], 2*A[6], 2*A[7], 2*A[8], 2*A[9], 2*A[10], 2*A[11...
                                               ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:179: warning: array index 11 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[6], 2*A[7], 2*A[8], 2*A[9], 2*A[10], 2*A[11], 2*A[1...
                                                ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:188: warning: array index 12 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[7], 2*A[8], 2*A[9], 2*A[10], 2*A[11], 2*A[12], 2*A[...
                                                 ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:197: warning: array index 13 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[8], 2*A[9], 2*A[10], 2*A[11], 2*A[12], 2*A[13], 2*A...
                                                  ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
main.c:44:206: warning: array index 14 is past the end of the
      array (which contains 1 element) [-Warray-bounds]
  ...2*A[9], 2*A[10], 2*A[11], 2*A[12], 2*A[13], 2*A[14]);
                                                   ^ ~~
main.c:10:3: note: array 'A' declared here
  int A[1];
  ^
27 warnings generated.
 ./main
Insira o numero 1:1
Insira o numero 2:2
Insira o numero 3:2
Insira o numero 4:2
Insira o numero 5:2
Insira o numero 6:2
Insira o numero 7:2
Insira o numero 8:5
Insira o numero 9:5
Insira o numero 10:5
Insira o numero 11:5
Insira o numero 12:5
Insira o numero 13:5
Insira o numero 14:5
Insira o numero 15:5
Legal! Agora vou dobrar os numeros e mostra-los na sua ordem:
2
 4
 4
 4
 4
 4
 4
 10
 10
 10
 10
 10
 10
 10
 10
exited, segmentation fault*/
