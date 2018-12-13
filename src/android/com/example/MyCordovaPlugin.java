/**
 */
package com.example;

import android.app.Activity;
import android.content.Context;
import org.apache.cordova.CallbackContext;
import org.apache.cordova.CordovaInterface;
import org.apache.cordova.CordovaPlugin;
import org.apache.cordova.CordovaWebView;
import org.apache.cordova.PluginResult;
import org.apache.cordova.PluginResult.Status;
import org.json.JSONObject;
import org.json.JSONArray;
import org.json.JSONException;

import android.util.Log;

import java.util.Date;

import fr.selic.thuitexternal.appointment.IntentAppointment;
import fr.selic.thuitexternal.appointment.IntentAppointmentResult;
import fr.selic.thuitexternal.appointment.Patient;

public class MyCordovaPlugin extends CordovaPlugin {
  private static final String TAG = "MyCordovaPlugin";

  public void initialize(CordovaInterface cordova, CordovaWebView webView) {
    super.initialize(cordova, webView);

    Log.d(TAG, "Initializing MyCordovaPlugin");
  }

  public boolean execute(String action, JSONArray args, final CallbackContext callbackContext) throws JSONException {
    if(action.equals("echo")) {
      //Patient pPatient = new Patient("Test","Subject",null,"11/12/1961",null,"123456",null,"1112");
      Patient pPatient;
      IntentAppointment iAppointment;
      //Context context=this.cordova.getActivity().getApplicationContext();

      Activity iActivity = this.cordova.getActivity();

      pPatient = new Patient();
      new IntentAppointment(iActivity, pPatient).startAppointment();
      
      
      
      
      
      String phrase = args.getString(0);
      // Echo back the first argument

    } else if(action.equals("getDate")) {
      // An example of returning data back to the web layer
      final PluginResult result = new PluginResult(PluginResult.Status.OK, (new Date()).toString());
      callbackContext.sendPluginResult(result);
    }
    return true;
  }

}
