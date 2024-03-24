module.exports = grammar({

  name: 'hotshot',

  extras: $ => [$.comments, /\s/],

  rules: {
    source_file: $ => repeat($.statement),

    statement: $ => choice(
      $.expression,
      $._sparen
    ),

    expression: $ => choice(
      $.integer,
      $.string,
      $.boolean,
      $.identifier,
      $.table,
    ),

    _sparen: $ => seq('(', $._paren ,')'),

    _paren: $ => choice(
      $.let,
      $.while,
      $.fcall,
      $.cond,
      $.fdec,
      $.lambda
    ),

    table: $ => seq('{', repeat($.returnable) ,'}'),

    fdec: $ => seq('fn', field('name', $.identifier), '(', field('argument', repeat($.identifier) ),')', $.statement),

    lambda: $ => seq('lambda', '(', repeat($.identifier) ,')', $.statement),

    while: $ => seq('while', choice($.returnable), $.statement),

    cond: $ => seq('cond', repeat($.cargs)),

    cargs: $ => seq('(',$.returnable, $.statement,')'),

    let: $ => seq('let', field('name', $.identifier ), $.returnable),

    returnable: $ => choice(
      $.expression,
      seq('(', $.fcall , ')'),
      seq('(', $.cond , ')'),
      seq('(', $.lambda , ')')
    ),

    fcall: $ => seq( field('name', $.fname), repeat($.returnable)),

    fname: $ => choice(
      $.operator,
      $.identifier
    ),

    operator: $ => choice(
      '+',
      '-',
      '*',
      '/',
      '=',
      '<',
      '>',
      'mod'
    ),

    identifier: $ => /[a-zA-Z]+[a-zA-Z0-9-_]*/,

    integer: $ => /-?\d+/,

    string: $ => /"[^"]*"/,

    boolean: $ => choice(
      'true',
      'false'
    ),

    comments: $ => /;[^;]*;/

  }
})
