// 파일열기
// FILE *fopen( const char * filename, const char * mode );

// // 파일닫기
// int fclose( FILE *fp );

// // 파일에 문자한개 쓰기
// int fputc( int c, FILE *fp );

// // 파일로부터 문자하개 읽어오기
// int fgetc( FILE * fp );

// // 파일로부터 문자열 읽어오기
// char *fgets( char *buf, int n, FILE *fp );
// int fscanf(FILE *fp, const char *format, ...)

// // 파일에 문자열 쓰기
// int fputs( const char *s, FILE *fp );
// int fprintf(FILE *fp,const char *format, ...);

// 파일에 데이터 쓰기
#include <stdio.h>

int main() {
   FILE *fp;

   // 파일을 쓰기모드로 열기 /tmp/test.txt
   fp = fopen("/tmp/test.txt", "w+");

   // 파일에 문자열을 출력  
   fprintf(fp, "This is testing for fprintf...\n");
   fputs("This is testing for fputs...\n", fp);

   // 파일닫기
   fclose(fp);

    return 0;
}


