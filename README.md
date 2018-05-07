# Smartech Android Cordova Plugin For FCM

Smartech plugin for Activity tracking in cordova Android Application Using FCM.

This plugin provides Activity tracking in cordova Android Application.

## Using

Create a new Cordova Project

    $ cordova create <prject name> <project package name> <Display Name>
    $ cd <Display Name>

Install Android platform

    $ cordova platform add android
    
Integrate Smartech SDK in created Cordova Project by following below github link

    https://github.com/NetcoreSolutions/Smartech-Android-FCM-SDK

Install the plugin

    $ cordova plugin add https://github.com/NetcoreSolutions/Smartech-Cordova-Android-FCM-Plugin.git

Edit `www/js/index.js` and add the following code inside `onDeviceReady` function

```js
    var data = {};
    data["eventId"] = "25";            // To get token from FCM
    data["identity"] = "<Login identity>";    // provide “” or primary key defined on smartech panel
    data["applicationId"] = "<ApplicationId>";    // provide AppId which you get from Smartech panel
    smartech.track(data);
```

For Activity Tracking, Add below js code for track activity where activity performed:

    var data = {};
    data["eventId"] = "<EventId>";    // compulsory field
    smartech.track(data);

Note: 
For Event Id: EventId is mandatory field to track Activity (get from Smartech Panel). 
For profile update, login and logout, eventId must be 0, 22 and 23 respectively

For identity : pass identity in data with key “identity” if identity is present

For payload : pass payload in data with key “payload” if payload is required
Format of  payload : Payload must be in below format as a Json object containing array of json Objects
 '{"payload":[{"s^name":"Nexus 5","i^prid":2,"s^price":"15000 Rs.","i^prqt":1}]}

For profile : pass profile details in data with key “profile” if profile build event called
Format of profile :  profile must be in below format as a Json object with key must be in Capital.
    {“NAME":"Developer","MOBILE":7894561231,"CITY":"Mumbai","AGE":25}


Run the code

    cordova run 

