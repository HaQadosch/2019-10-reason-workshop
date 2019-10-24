let places = Exo2.places;

let rec names_of_places__ = (res: list(string)) => (places: list(Exo2.place)) => switch (res, places) {
| (res, []) => res
| (res, [{name: name, _}, ...rest]) => names_of_places__(Belt.List.add(res, name), rest)
};

let names_of_places = (places) => {
  let rec names_of_places_ = (res_: list(string)) => (places_: list(Exo2.place)) => switch (res_, places_) {
    | (res, []) => res
    | (res, [{name: placeName, _}, ...rest]) => names_of_places_([placeName, ...res])(rest)
  } ;
  names_of_places_([])(places);
};

Js.log(places |> names_of_places |> Belt.List.toArray);

Js.log(places -> Belt.List.map(place => place.name))