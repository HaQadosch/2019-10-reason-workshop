type color = White | Black;
type kind = King | Queen | Bishop | Knight | Rook | Pawn;

type figure = {
  kind,
  color,
  position: (char, int)
};

let figures = [
  {kind: King, color: White, position: ('A', 1)},
  {kind: Rook, color: Black, position: ('C', 7)}
];

let stringOfColor = col => switch (col) {
| White => "White"
| Black => "Black"
};

let stringOfKind = knd => switch knd {
| King => "King"
| Queen => "Queen"
| Bishop => "Bishop"
| Knight => "Knight"
| Rook => "Rook"
| Pawn => "Pawn"
};

let stringOfPosition = (a: char, b: int) => String.make(1, a) ++ string_of_int(b);

let stringOfFigure: figure => string = ({kind: k, color: c, position: p}) => stringOfKind(k) ++ ", " ++ stringOfColor(c) ++ ", " ++ stringOfPosition(fst(p), snd(p)) ;

Js.log(stringOfFigure(List.nth(figures, 0)))
Js.log("Hello, BuckleScript and Reason!");
