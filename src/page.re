open Native;

let styleshaeet =
  StyleSheet.create {
    "view": View.createStyle flex::1 backgroundColor::"#cda" (),
    "view1": View.createStyle flex::1 backgroundColor::"#abc" ()
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
      <View style=styleshaeet##view1 />
      <View style=styleshaeet##view />
    </View>;
};

include ReactRe.CreateComponent NativeRoot;

let createElement = wrapProps ();
