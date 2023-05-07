/*

    파일 열기
    FILE *fopen(const char * filename, const char * mode);
    
    파일 닫기
    int fclose(FILE *fp);

    파일에 문자한게 쓰기
    int fputc(int c, FILE *fp);

    파일로부터 문자열 읽어오기
    char *fgets(char *buf, int n, FILE *fp);
    int fscanf(FILE *fp, const char *format,...);

    파일에 문자열 쓰기
    int fputs(const char *s,FILE *fp);
    int fprintf(FILE *fp, const char *format,...); 가변 인자 ...
    

파일 모드
| 모드 | 접근 방식 |
| --- | --- |
| "r" / "rb" | Read existing text/binary file. |
| "w" / "wb" | Write new/over existing text/binary file. |
| "a" / "ab" | Write new/append to existing text/binary file. |
| "r+" / "r+b" / "rb+" | Read and write existing text/binary file. |
| "w+" / "w+b" / "wb+" | Read and write new/over existing text/binary file. |
| "a+" / "a+b" / "ab+" | Read and write new/append to existing text/binary file. |

*/

//이거도 써보면서 익혀야할듯