
# libft

`libft`는 42서울 공통과정의 첫 번째 프로젝트로, C 표준 라이브러리 함수들을 직접 구현하여 나만의 라이브러리를 만드는 프로젝트입니다.

## 목차
- [libft](#libft)
	- [목차](#목차)
	- [프로젝트 개요](#프로젝트-개요)
	- [구현된 함수들](#구현된-함수들)
		- [1. 문자열 처리 함수](#1-문자열-처리-함수)
		- [2. 메모리 관리 함수](#2-메모리-관리-함수)
		- [3. 변환 함수](#3-변환-함수)
		- [4. 출력 함수](#4-출력-함수)
		- [5. 리스트 관리 함수 (링크드리스트)](#5-리스트-관리-함수-링크드리스트)
	- [설치 방법](#설치-방법)
	- [사용 방법](#사용-방법)

## 프로젝트 개요

`libft`는 다음과 같은 C 표준 라이브러리의 함수들을 직접 구현하여 나만의 라이브러리를 만드는 프로젝트입니다. 이 라이브러리를 통해 기본적인 문자열 조작, 메모리 관리, 리스트 관리 등의 기능을 사용할 수 있습니다. 모든 함수는 `libc`와 동일한 동작을 목표로 하며, 나만의 `libft`를 작성하여 프로젝트에 활용할 수 있습니다.

## 구현된 함수들

이 프로젝트에서는 다양한 C 표준 함수들과 몇 가지 유틸리티 함수를 포함합니다.

### 1. 문자열 처리 함수
- `ft_strlen` - 문자열의 길이를 반환
- `ft_strcpy`, `ft_strncpy` - 문자열을 복사
- `ft_strcat`, `ft_strncat` - 문자열을 이어 붙임
- `ft_strdup` - 문자열을 복제하여 새로운 메모리에 할당
- `ft_strchr`, `ft_strrchr` - 문자열에서 특정 문자를 검색
- `ft_strstr`, `ft_strnstr` - 문자열에서 특정 문자열을 검색
- `ft_strcmp`, `ft_strncmp` - 문자열 비교
- `ft_strjoin`, `ft_strtrim` - 문자열 합치기 및 공백 제거
- `ft_substr` - 문자열의 일부를 추출
- `ft_split` - 문자열을 특정 구분자로 나눔
- `ft_strlcpy`, `ft_strlcat` - 안전한 문자열 복사 및 붙이기
- `ft_striteri` - 문자열의 각 문자에 대해 함수 적용
- `ft_strmapi` - 변환된 문자열을 반환

### 2. 메모리 관리 함수
- `ft_memset` - 메모리를 특정 값으로 초기화
- `ft_memcpy` - 메모리를 다른 메모리로 복사
- `ft_memmove` - 메모리를 겹치지 않게 이동
- `ft_bzero` - 메모리를 0으로 초기화
- `ft_memchr` - 메모리에서 특정 값을 검색
- `ft_memcmp` - 두 메모리 영역을 비교
- `ft_calloc` - 초기화된 메모리를 할당

### 3. 변환 함수
- `ft_atoi` - 문자열을 정수로 변환
- `ft_itoa` - 정수를 문자열로 변환
- `ft_tolower` - 문자를 소문자로 변환
- `ft_toupper` - 문자를 대문자로 변환

### 4. 출력 함수
- `ft_putchar_fd` - 파일 디스크립터에 문자 출력
- `ft_putstr_fd` - 파일 디스크립터에 문자열 출력
- `ft_putendl_fd` - 파일 디스크립터에 문자열과 개행 출력
- `ft_putnbr_fd` - 파일 디스크립터에 정수 출력

### 5. 리스트 관리 함수 (링크드리스트)
- `ft_lstnew` - 새로운 리스트 요소를 생성
- `ft_lstadd_front`, `ft_lstadd_back` - 리스트의 앞이나 뒤에 요소 추가
- `ft_lstsize` - 리스트의 크기를 반환
- `ft_lstlast` - 리스트의 마지막 요소 반환
- `ft_lstdelone`, `ft_lstclear` - 특정 요소나 전체 리스트 삭제
- `ft_lstiter` - 리스트의 모든 요소에 대해 반복 작업
- `ft_lstmap` - 리스트의 모든 요소에 함수 적용 및 새로운 리스트 반환

## 설치 방법

1. 터미널에서 이 저장소를 클론합니다.
    ```bash
    git clone https://github.com/jmsmg/libft.git
    cd libft
    ```

2. 라이브러리를 빌드합니다.
    ```bash
    make
    ```

3. 빌드 후, `libft.a`라는 정적 라이브러리 파일이 생성됩니다.

## 사용 방법

프로젝트에서 `libft.a`를 링크하여 사용할 수 있습니다.

```c
#include "libft.h"

int main(void) {
    char *str = "Hello, World!";
    int len = ft_strlen(str);
    printf("Length: %d\n", len);
    return 0;
}
```

컴파일할 때 `libft.a`를 링크합니다.

```bash
gcc -o program main.c -L. -lft
```