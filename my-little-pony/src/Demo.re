type color = White | Black;
type kind = King | Queen | Bishop | Knight | Rook | Pawn;

type figure = {
  kind,
  color,
  position: (char, int)
}

let figures = [
  {kind: King, color: White, position: ('A', 1)},
  {kind: Rook, color: Black, position: ('C', 7)}
]

Js.log("Hello, BuckleScript and Reason!");
