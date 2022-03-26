use std::fmt::{Debug};

#[derive(Debug, Eq, PartialEq)]
pub struct Token {
    pub index: i32,
    pub value: String,
    pub t_type: TokenType
}

#[derive(Debug, Eq, PartialEq)]
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
    QUOTE,
    STRING
}

pub type StringHead = (usize, String);

pub fn tokenizeV2(source: String) -> Vec<Token> {
    let mut tokens: Vec<Token> = Vec::new();
    let char_arr: Vec<char> = remove_whitespace(source).chars().collect();

    let not_end: bool = false;
    let mut head: usize = 0;
    while not_end != true {
        let curr = char_arr[head];
        if head == char_arr.len() - 1 {
            break;
        }
        match curr {
            '"' => {
                let string_head:StringHead = extract_string(&char_arr, head as usize);
                let tok: Token = create_token(0, string_head.1, TokenType::STRING);
                tokens.push(tok);
                head = string_head.0 + 1;
            }
            _ => {
                let t: TokenType = get_token_type(curr);
                let tok: Token = create_token(0, String::from(curr), t);
                tokens.push(tok);
                head = head + 1;
            }
        }
    }

    return tokens;
}

pub fn extract_string(char_arr: &Vec<char>, mut head: usize) -> StringHead {
    head = head + 1;
    let flag: bool = true;
    let mut extract: String = String::new();

    while flag == true {
        match char_arr[head] {
            '"' => break,
            _   => {
                extract.push(char_arr[head]);
                head = head + 1;
            }
        }
    }

    return (head, extract);
}

pub fn create_token(index: i32, value: String, t_type: TokenType) -> Token {
    let tok: Token = Token {
        index: index,
        value: value,
        t_type: t_type,
    };

    return tok;
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

pub fn remove_whitespace(s: String) -> String {
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
