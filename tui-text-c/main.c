#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//제목입력
#define MAX_TITLE 256
//내용
#define MAX_CONTENT 1024

int main(){
    char title[MAX_TITLE];
    char content[MAX_CONTENT];
    char line[MAX_CONTENT];
    FILE *file;

    //제목 입력 받기
    printf("파일 제목을 입력: ");
    fgets(title, MAX_TITLE, stdin);
    title[strcspn(title, "\n")] = 0; // 제목의 끝에 개행 문자를 제거
    //제목을 .txt 형식으로 변경
    strcat(title, ".txt");

    //파일 쓰기 모드로 열기
    file = fopen(title,"w");
    if (file == NULL) {
    	printf("파일을 열 수 없습니다.");
	return 1;
    }

    printf("내용을 입력하세요.(종료시 'exit;'를 입력하세요:) \n");

    //내용 입력 받기
    while(1) {
    	fgets(line, MAX_CONTENT,stdin);
	if (strcmp(line, "exit;\n") == 0) {
	    break;
	}
	fputs(line, file);
    }

    fclose(file);
    printf("파일이 저장 되었습니다:%s\n",title);
    
    return 0;
}
