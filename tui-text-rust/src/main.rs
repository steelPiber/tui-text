use std::fs::File;
use std::io::{self, Write, BufRead, BufReader};
use std::path::Path;

fn main() -> io::Result<()> {
    // 제목 입력 받기
    println!("파일 제목을 입력하세요:");
    let mut title = String::new();
    io::stdin().read_line(&mut title)?;
    let title = title.trim(); // 제목의 공백 제거

    // 파일명 형식 지정
    let filename = format!("{}.txt", title);

    // 파일 열기
    let path = Path::new(&filename);
    let mut file = File::create(&path)?;

    println!("내용을 입력하세요. (종료하려면 'exit;'를 입력하세요):");

    // 내용 입력 받기
    let stdin = io::stdin();
    let reader = BufReader::new(stdin.lock());

    for line in reader.lines() {
        let line = line?;
        if line.trim() == "exit;" {
            break;
        }
        writeln!(file, "{}", line)?;
    }

    println!("파일이 저장되었습니다: {}", filename);
    Ok(())
}

