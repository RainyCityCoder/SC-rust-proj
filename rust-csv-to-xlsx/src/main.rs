use std::error::Error;
use csv;
extern crate rprompt;
extern crate morse;
use morse::encode;

fn main() {
    if let Err(e) = read_from_file("./sample.csv") { // make path user-selectable???
        eprintln!("{}", e);
    }
}

fn read_from_file(path: &str) -> Result<(), Box<dyn Error>> {
    let mut reader = csv::Reader::from_path(path)?; 

    for result in reader.records() {
        let record = result?;
        for field in record.iter() {
            ascii_to_morse(field);
        }
    }
    Ok(())
}

fn ascii_to_morse(field:&str) {
    let mut _result: String = encode::encode(field).unwrap();
    println!("{}", _result);
}