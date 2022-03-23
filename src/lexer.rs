use std::num::ParseIntError;

#[derive(Debug)]
pub struct Token {
    index: i32,
    symbol: char,
    t_type: TokenType
}

pub enum TokenType {
    ID,
    LPAREN,
    RPAREN,
    LBRACE,
    RBRACE,
    RBRACKET,
    LBRACKET,
    COLON,
    COMMA,
    NUMBER,
    STRING,
    QUOTE
}

pub fn tokenize(source: String) -> Vec<Token> {
    // println!("Creating tokens");
    let mut tokens = Vec::new();
    let char_arr: Vec<char> = source.chars().collect();
    for n in 0..char_arr.len() {
        println!("{}", n);
        let token_type: TokenType = get_token_type(char_arr[n]);
        let token = Token {
            index: 1,
            symbol: char_arr[n],
            t_type: token_type,
        };
        tokens.push(token);
    }
    
    return tokens;
}

fn get_token_type(symbol: char) -> TokenType {
    match symbol {
        '(' => TokenType::LPAREN,
        ')' => TokenType::RPAREN,
        '{' => TokenType::LBRACE,
        '}' => TokenType::RBRACE,
        '[' => TokenType::LBRACKET,
        ']' => TokenType::RBRACKET,
        ':' => TokenType::COLON,
        ',' => TokenType::COMMA,
        '"' => TokenType::QUOTE,
         _  => TokenType::ID,
    }
}

