use std::fmt::{Debug};

#[derive(Debug)]
pub struct Token {
    index: i32,
    value: String,
    t_type: TokenType
}

#[derive(Debug)]
pub enum TokenType {
    LPAREN,
    RPAREN,
    LBRACE,
    RBRACE,
    RBRACKET,
    LBRACKET,
    COLON,
    COMMA,
    NUMBER,
    VALUE,
    QUOTE
}

pub fn tokenizeV2(source: String) -> Vec<Token> {
    let tokens: Vec<Token> = Vec::new();



    return tokens;
}

pub fn tokenize(source: String) -> Vec<Token> {
    // println!("Creating tokens");
    let mut tokens = Vec::new();
    let char_arr: Vec<char> = remove_whitespace(source).chars().collect();
    for n in 0..char_arr.len() {
        // println!("{}", n);
        let token_type: TokenType = get_token_type(char_arr[n]);
        let token = Token {
            index: 1,
            value: char_arr[n].to_string(),
            t_type: token_type,
        };
        tokens.push(token);
    }
    
    return tokens;
}

fn flatten_string_tokens(tokens: Vec<Token>) -> Vec<Token> {
    let flattened:Vec<Token> = Vec::new();
    let length = tokens.len();
    for n in 0..length {
        match tokens[n].t_type {
            TokenType::QUOTE => {
                for x in n..length {

                }
            },

            _ => continue,
        }
    }

    return flattened;
}

fn remove_whitespace(s: String) -> String {
    s.chars().filter(|c| !c.is_whitespace()).collect()
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
        _   => TokenType::VALUE,
    }
}
