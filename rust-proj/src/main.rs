use std::io;
extern crate rprompt;
extern crate morse;
use morse::encode;
use morse::decode;

fn main() {
    let _choice = rprompt::prompt_reply("Please enter 'M' for Morse-to-ASCII, or 'A' for ASCII-to-Morse. ").unwrap().to_uppercase();
    if _choice == "A" {
        ascii_to_morse();
    } else if _choice == "M" {
        morse_to_ascii();
    } else {
        println!("Oops, I didn't understand, please try running the program again.");
    }
}

fn ascii_to_morse() {
    let mut input: String = String::new();
    println!("What do you want translated to morse code?");
    match io::stdin().read_line(&mut input) {
        Ok(_) => {
            println!("Here is {} in Morse code:", input);
            let mut _result: String = encode::encode(input).unwrap();
            println!("Result: {}", _result);
        }
        Err(_e) => println!("Something went wrong; check the characters you input!")
    }
}

fn morse_to_ascii() {
    let mut input: String = String::new();
    println!("What do you want translated to ASCII (separate letters with a space)?");
    match io::stdin().read_line(&mut input) {
        Ok(_) => {
            println!("Here is {} in ASCII:", input);
            let mut _result: String = decode::decode(input).unwrap();
            println!("Result: {}", _result);
        }
        Err(_e) => println!("Something went wrong; check the characters you input!")
    }
}