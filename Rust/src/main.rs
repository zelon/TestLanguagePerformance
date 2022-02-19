fn main() {
    let loop_count = 10000000000;
    let mut total : i64 = 0;
    let start_time = std::time::SystemTime::now();
    for i in 0..=loop_count {
        total += i;
    }
    let end_time = std::time::SystemTime::now();
    let diff_time = end_time.duration_since(start_time).expect("cannot diff");
    let duration_ms = diff_time.as_millis();
    #[cfg(debug_assertions)]
    let configuration = "DEBUG";
    #[cfg(not(debug_assertions))]
    let configuration = "RELEASE";

    println!("Rust {configuration} loop_count:{loop_count},total:{total},duration:{duration_ms}ms");
}

