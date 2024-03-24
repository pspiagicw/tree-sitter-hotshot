(fcall name: (fname) @function)

(fdec name: (identifier) @function)

(fdec argument: (identifier) @type)

(let name: (identifier) @property)

(expression (identifier) @property)

(boolean) @constant
(integer) @number
(string) @string

[
 "let"
 "while"
 "fn"
 "cond"
 "lambda"
 ] @keyword


(comments) @comment

(operator) @operator


")" @punctuation.bracket
"(" @punctuation.bracket
"{" @punctuation.bracket
"}" @punctuation.bracket
