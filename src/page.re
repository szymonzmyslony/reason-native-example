open Native;

let styleshaeet =
  StyleSheet.create {
    "view": View.createStyle flex::1 backgroundColor::"#cda" (),
    "view1": View.createStyle flex::1 backgroundColor::"#abc" (),
    "text": TextInput.createStyle flex::1 backgroundColor::"#abc" (),
  };

module NativeRoot = {
  include ReactRe.Component.JsProps;
  type props =
    | ();
  let name = "myCamaaaaat";
  type jsProps = Js.t {.};
  let jsPropsToReasonProps = Some (fun _ => ());
  let render {props} =>
    <View style=styleshaeet##view >
    <TextInput style=styleshaeet##text/>
    </View>;
};

include ReactRe.CreateComponent NativeRoot;

let createElement = wrapProps ();
