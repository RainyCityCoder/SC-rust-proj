# Rust project

A CLI morse code translator.

## Dependencies

- [Rust and Cargo](https://www.rust-lang.org/learn/get-started)
- [rprompt](https://crates.io/crates/rprompt)
- [morse](https://crates.io/crates/morse)

## How to run:

Install Rust and Cargo, if necessary. Download the `src` directory and `Cargo.toml` file in this directory to the same local location, or clone this repository. The project may be run without building by using one of the following terminal commands from within the `src` directory:

#### Linux / MacOS

`$ cargo run ./main.rs`

#### Windows PowerShell

`> .\main.rs`

## Building an executable

If you wish to build an executable, run the following commands:

#### Linux / MacOS

- `$ cargo build --release`
- Navigate to the location of the executable. By default this is `target/release/`.
- `$ ./rust-proj`

#### Windows PowerShell

These commands are untested.

- `> cargo build --release`
- Navigate to the location of the executable. By default this is `target\release\`.
- `> .\rust-proj`
