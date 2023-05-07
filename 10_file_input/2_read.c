// // 파일열기
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

// 파일에서 데이터 읽어오기
#include <stdio.h>

int main() {

   FILE *fp;
   char buff[255];

   fp = fopen("/tmp/test.txt", "r");
   fscanf(fp, "%s", buff);
   printf("1 : %s\n", buff );

   fgets(buff, 255, (FILE*)fp);
   printf("2: %s\n", buff );
   
   fgets(buff, 255, (FILE*)fp);
   printf("3: %s\n", buff );
   fclose(fp);
   return 0;
}
