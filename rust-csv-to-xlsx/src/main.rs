extern crate morse;
use rust_xlsxwriter::*;
use std::error::Error;
use csv;
use morse::encode;

fn main() {
    create_xlsx_and_begin();
}

fn create_xlsx_and_begin() {
    let mut workbook = Workbook::new();
    let sheet = workbook.add_worksheet();
    let _ = sheet.set_name("test");
    
    if let Err(e) = read_from_file("./sample.csv") {
        eprintln!("{}", e);
    } 
    
    
    let _ = workbook.save("./output.xlsx");

}

fn read_from_file(path: &str, ) -> Result<(), Box<dyn Error>> {
    let mut csv_file = csv::Reader::from_path(path)?; 

    {
        let headers = csv_file.headers()?;
        println!("{:?}", headers);
    }
    for result in csv_file.records() {
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