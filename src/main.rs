mod lexer;
mod test;

use crate::lexer::{Token, tokenizeV2};

fn main() {
    let json_code = String::from("{
        \"name\": \"Patrick\", 
        \"age\": 88, 
        \"things\": [1, 2, 3] 
    }");
    let tokens: Vec<Token> = tokenizeV2(json_code);
    for tok in tokens {
        println!("{:?}", tok);
    }
}
