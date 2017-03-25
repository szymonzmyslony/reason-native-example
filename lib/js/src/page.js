// Generated by BUCKLESCRIPT VERSION 1.6.0+dev, PLEASE EDIT WITH CARE
'use strict';

var Curry        = require("bs-platform/lib/js/curry");
var ReactRe      = require("reason-react/lib/js/src/reactRe");
var Js_undefined = require("bs-platform/lib/js/js_undefined");
var ReactNative  = require("react-native");

function to_js_boolean(b) {
  if (b) {
    return true;
  } else {
    return false;
  }
}

function optionMap(fn, opt_value) {
  if (opt_value) {
    return /* Some */[Curry._1(fn, opt_value[0])];
  } else {
    return /* None */0;
  }
}

function createElement(accessible, allowFontScaling, ellipsizeMode, numberOfLines) {
  var partial_arg = {
    accessible: Js_undefined.from_opt(optionMap(to_js_boolean, accessible)),
    allowFontScaling: Js_undefined.from_opt(optionMap(to_js_boolean, allowFontScaling)),
    ellipsizeMode: Js_undefined.from_opt(optionMap(function (param) {
              if (param >= -866200747) {
                if (param >= -856246640) {
                  return "tail";
                } else {
                  return "middle";
                }
              } else if (param >= -989124320) {
                return "head";
              } else {
                return "clip";
              }
            }, ellipsizeMode)),
    numberOfLines: Js_undefined.from_opt(numberOfLines)
  };
  var partial_arg$1 = ReactNative.Text;
  return function (param, param$1, param$2, param$3) {
    return ReactRe.wrapPropsShamelessly(partial_arg$1, partial_arg, param, param$1, param$2, param$3);
  };
}

var Text = /* module */[/* createElement */createElement];

var componentDidMount = ReactRe.Component[0];

var componentWillUpdate = ReactRe.Component[1];

var componentDidUpdate = ReactRe.Component[2];

var componentWillReceiveProps = ReactRe.Component[3];

var componentWillUnmount = ReactRe.Component[4];

var getInstanceVars = ReactRe.Component[5];

var jsPropsToReasonProps = ReactRe.Component[6];

var getInitialState = ReactRe.Component[7];

var name = "NativeRoot";

function render() {
  return createElement(/* None */0, /* None */0, /* None */0, /* None */0)(/* :: */[
              "alpha bravo charlie delta echo foxtrot golf hotel india juliet kilo",
              /* [] */0
            ], /* None */0, /* None */0, /* () */0);
}

var NativeRoot_008 = /* Stateful */ReactRe.Component[8];

var NativeRoot_009 = /* JsProps */ReactRe.Component[9];

var NativeRoot_010 = /* InstanceVars */ReactRe.Component[10];

var NativeRoot = /* module */[
  /* componentDidMount */componentDidMount,
  /* componentWillUpdate */componentWillUpdate,
  /* componentDidUpdate */componentDidUpdate,
  /* componentWillReceiveProps */componentWillReceiveProps,
  /* componentWillUnmount */componentWillUnmount,
  /* getInstanceVars */getInstanceVars,
  /* jsPropsToReasonProps */jsPropsToReasonProps,
  /* getInitialState */getInitialState,
  NativeRoot_008,
  NativeRoot_009,
  NativeRoot_010,
  /* name */name,
  /* render */render
];

var include = ReactRe.CreateComponent([
      name,
      getInstanceVars,
      getInitialState,
      componentDidMount,
      componentWillReceiveProps,
      componentWillUpdate,
      componentDidUpdate,
      componentWillUnmount,
      jsPropsToReasonProps,
      render
    ]);

var wrapProps = include[1];

var createElement$1 = Curry._1(wrapProps, /* () */0);

var comp = include[0];

exports.to_js_boolean = to_js_boolean;
exports.optionMap     = optionMap;
exports.Text          = Text;
exports.NativeRoot    = NativeRoot;
exports.comp          = comp;
exports.wrapProps     = wrapProps;
exports.createElement = createElement$1;
/* include Not a pure module */