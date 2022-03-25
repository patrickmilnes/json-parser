mod lexer;

use crate::lexer::{Token, tokenize};

fn main() {
    println!("Hello World");
    let json_code = String::from("{
        \"name\": \"Patrick\", 
        \"age\": 88, 
        \"things\": [1, 2, 3] 
    }");
    let tokens: Vec<Token> = tokenize(json_code);
    for tok in tokens {
        println!("{:?}", tok);
    }
}
