let to_js_boolean b => if b { Js.true_ } else { Js.false_ };
let optionMap fn opt_value => switch opt_value {
  | None => None
  | Some value => Some (fn value)
};

/* module View = {
    external view : ReactRe.reactClass = "View" [@@bs.module "react-native"];
    let createElement
        accessible::(accessible:option bool)=?
        onClick::(onClick:option (ReactEventRe.Mouse.t => unit))=? =>
      ReactRe.wrapPropsShamelessly
        view
        {
          "accessible": Js.Undefined.from_opt (optionMap to_js_boolean accessible),
          "onClick": Js.Undefined.from_opt onClick
        };
}; */

module Text = {
  type ellipsizeModeT = [
    | `head
    | `middle
    | `tail
    | `clip
  ];
  external text : ReactRe.reactClass = "Text" [@@bs.module "react-native"];
  let createElement
      accessible::(accessible:option bool)=?
      allowFontScaling::(allowFontScaling:option bool)=?
      ellipsizeMode::(ellipsizeMode:option ellipsizeModeT)=?
      numberOfLines::(numberOfLines:option int)=? =>
    ReactRe.wrapPropsShamelessly
    text
      {
        "accessible": Js.Undefined.from_opt (optionMap to_js_boolean accessible),
        "allowFontScaling": Js.Undefined.from_opt (optionMap to_js_boolean allowFontScaling),
        "ellipsizeMode": Js.Undefined.from_opt (optionMap (fun
          | `head => "head"
          | `middle => "middle"
          | `tail => "tail"
          | `clip => "clip") ellipsizeMode),
        "numberOfLines": Js.Undefined.from_opt numberOfLines
      };
};

/* module Button = {
  external button : ReactRe.reactClass = "Button" [@@bs.module "react-native"];
  let createElement
    accessibilityLabel::(accessibilityLabel:option string)=?
    color::(color:option string)=?
    disabled::(disabled:option bool)=?
    onPress::(onPress:option (ReactEventRe.Mouse.t => unit))=?
    title::(title:option string)=? =>
    ReactRe.wrapPropsShamelessly
      button
      {
        "accessibilityLabel": Js.Undefined.from_opt accessibilityLabel,
        "color": Js.Undefined.from_opt color,
        "disabled": Js.Undefined.from_opt (optionMap to_js_boolean disabled),
        "onPress": Js.Undefined.from_opt onPress,
        "title": Js.Undefined.from_opt title,
      }
}; */

/* module ActionSheetIOS = {
  type actionSheetOptions = Js.t {. options: array string, cancelButtonIndex: int, descructiveButtonIndex: int, title: string, message: string };
  external showActionSheetWithOptions : actionSheetOptions -> (int -> unit) -> unit = "ActionSheetIOS.showActionSheetWithOptions" [@bs.val]
}; */

/* module Dimensions = {
  type dim = Js.t {. width: float, height: float, scale: float, fontScale: float };
  external get : [
    | `window
    | `windowPhysicalPixels
    | `screen ] [@bs.string] => dim = "get" [@@bs.module "Dimensions"];
};

module Keyboard = {
  type event = Js.t {.
    endCoordinates: Js.t {.
      width: float,
      height: float,
      screenX: float,
      screenY: float
    }
  };
  external addListener: eventName::([
    | `keyboardWillShow
    | `keyboardDidShow
    | `keyboardWillHide
    | `keyboardDidHide
    | `keyboardWillChangeFrame
    | `keyboardDidChangeFrame
  ] [@bs.string]) => (event => unit) => unit = "addListener" [@@bs.module "Keyboard"];
  external removeListener: eventName::([
    | `keyboardWillShow
    | `keyboardDidShow
    | `keyboardWillHide
    | `keyboardDidHide
    | `keyboardWillChangeFrame
    | `keyboardDidChangeFrame
  ] [@bs.string]) => (event => unit) => unit = "removeListener" [@@bs.module "Keyboard"];
  external removeAllListeners: eventName::([
    | `keyboardWillShow
    | `keyboardDidShow
    | `keyboardWillHide
    | `keyboardDidHide
    | `keyboardWillChangeFrame
    | `keyboardDidChangeFrame
  ] [@bs.string]) => unit = "removeAllListeners" [@@bs.module "Keyboard"];
  external dismiss: unit => unit = "dismiss" [@@bs.module "Keyboard"];
}; */

module NativeRoot = {
  include ReactRe.Component;
  type props = ();
  let name = "NativeRoot";
  /* let handleClick {props} event => {
    Js.log "clicked!";
    Some { presses: state.presses + 1 }
  }; */
  let render {props, state, updater} => {
      <Text >
        (ReactRe.stringToElement "alpha bravo charlie delta echo foxtrot golf hotel india juliet kilo")
      </Text>
  };
  /* let render {props, updater} =>
    <div onClick=(updater handleClick)> (ReactRe.stringToElement "hello") </div>; */
};

include ReactRe.CreateComponent NativeRoot;

let createElement = wrapProps ();
