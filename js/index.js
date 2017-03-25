/**
* @providesModule App
* @flow
*/
var NativeRoot = require("../lib/js/src/page");
import React, { Component } from "react";
import { AppRegistry, StyleSheet, Text, View } from "react-native";
export default class reason_native_example extends Component {
  render() {
    return (
      <View style={styles.container}>
        <NativeRoot />
      </View>
    );
  }
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    justifyContent: "center",
    alignItems: "center",
    backgroundColor: "#F5FCFF"
  },
  welcome: {
    fontSize: 20,
    textAlign: "center",
    margin: 10
  },
  instructions: {
    textAlign: "center",
    color: "#333333",
    marginBottom: 5
  }
});
