open Native;

module NativeRoot = {
  include ReactRe.Component.JsProps;
  type props = ();
  let name = "myComponent";
  type jsProps = Js.t {.};
  let jsPropsToReasonProps = Some (fun _ => ());

  let render {props} => {
      <View />
  };

};

include ReactRe.CreateComponent NativeRoot;

let createElement = wrapProps ();
