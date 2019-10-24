// In this Interop example folder, we have:
// - A ReasonReact component, ReasonReactCard.re (this file)
// - Used by a ReactJS component, ReactJSCard.js
// - ReactJSCard.js can be used by ReasonReact, through bindings in ReasonUsingJSUsingReason.re
// - ReasonUsingJSUsingReason.re is used by Index.re
[@react.component]
let make = (~style) => {
  <div style> 
    <ul>
      // <li>
      //   {React.string("This is a ReasonReact card")} 
      // </li>
      {Data.names 
        -> Belt.List.map(name => <li>{React.string(name)}</li>)
        -> Belt.List.toArray 
        -> React.array
        }
    </ul>
  </div>;
};
