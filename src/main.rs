mod lexer;

use crate::lexer::tokenize;

fn main() {
    println!("Hello World");
    let json_code = String::from("{
        \"name\": \"Patrick\", 
        \"age\": 88, 
        \"things\": [1, 2, 3] 
    }");
    tokenize(json_code);
}

