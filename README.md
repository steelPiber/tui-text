
각 디렉토리는 개별 프로젝트를 나타내며, 각 프로젝트는 독립적으로 실행 가능합니다.

## 기능

- 사용자로부터 파일 제목을 입력받습니다.
- 내용 입력을 받으며, "exit;"를 입력하면 내용 입력이 종료됩니다.
- 입력된 제목의 이름으로 `.txt` 파일이 생성되고, 입력된 내용이 파일에 저장됩니다.

## 요구 사항

- **tui-text-c**: GCC (GNU Compiler Collection) 또는 다른 C 컴파일러
- **tui-text-rust**: Rust 설치 (https://www.rust-lang.org)

## 설치 및 실행

### `tui-text-c`

1. `tui-text-c` 디렉토리로 이동합니다.

    ```bash
    cd tui-text/tui-text-c
    ```

2. 다음 명령어를 사용하여 프로그램을 컴파일합니다:

    ```bash
    gcc main.c -o tui-text-c
    ```

3. 프로그램을 실행합니다:

    ```bash
    ./tui-text-c
    ```

### `tui-text-rust`

1. `tui-text-rust` 디렉토리로 이동합니다.

    ```bash
    cd tui-text/tui-text-rust
    ```

2. 다음 명령어를 사용하여 프로그램을 실행합니다:

    ```bash
    cargo run
    ```

## 사용 방법

1. 프로그램이 실행되면 파일 제목을 입력하라는 메시지가 표시됩니다. 파일 제목을 입력하고 Enter를 누릅니다.
2. 내용 입력을 시작할 수 있습니다. 여러 줄의 텍스트를 입력할 수 있으며, "exit;"를 입력하면 내용 입력이 종료됩니다.
3. 입력한 제목의 파일이 현재 디렉토리에 생성되고, 입력한 내용이 저장됩니다.

## 예시

```plaintext
파일 제목을 입력하세요: example
내용을 입력하세요. (종료하려면 'exit;'를 입력하세요):
Hello, this is a test.
Another line of text.
exit;
파일이 저장되었습니다: example.txt
