// In this Interop example folder, we have:
// - A ReasonReact component, ReasonReactCard.re (this file)
// - Used by a ReactJS component, ReactJSCard.js
// - ReactJSCard.js can be used by ReasonReact, through bindings in ReasonUsingJSUsingReason.re
// - ReasonUsingJSUsingReason.re is used by Index.re
[@react.component]
let make = (~style) => {
  let handleChange = input => Js.log(input);

  <div style> 
    <form action="">
      <fieldset>
        <legend>{"Choose your place" |> React.string}</legend>
        <label htmlFor="place">{"Place" |> React.string}</label>
        <input type_="text" name="place" id="placeInputText" onChange={event -> handleChange(ReactEvent.Form.target##value)}/>
      </fieldset>
    </form>
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
