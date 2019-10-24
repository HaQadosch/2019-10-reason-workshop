'use strict';

var React = require("react");
var Belt_List = require("bs-platform/lib/js/belt_List.js");
var Data$ReasonReactExamples = require("../Data.bs.js");

function ReasonReactCard(Props) {
  var style = Props.style;
  return React.createElement("div", {
              style: style
            }, React.createElement("ul", undefined, Belt_List.toArray(Belt_List.map(Data$ReasonReactExamples.names, (function (name) {
                            return React.createElement("li", undefined, name);
                          })))));
}

var make = ReasonReactCard;

exports.make = make;
/* react Not a pure module */
