# Titanium-Android-Count.ly

Countly is an innovative, real-time, open source mobile analytics application. It collects data from mobile phones, and visualizes this information to analyze mobile application usage and end-user behavior. There are two parts of Countly: the server that collects and analyzes data, and mobile SDK that sends this data (for iOS & Android).

Countly Server;

- [Countly Server (countly-server)](https://github.com/Countly/countly-server)

Other Countly SDK repositories;

- [Countly Android SDK (countly-sdk-android)](https://github.com/Countly/countly-sdk-android)
- [Countly iOS SDK (countly-sdk-ios)](https://github.com/Countly/countly-sdk-ios)

## Please note that this Module is under development.

## Installation

### Register your module with your application by editing `tiapp.xml` and adding your module.

```
<modules>
<module platform="android">ly.count</module>
</modules>
```

## Usage

### Start Count.ly

**Start Tracking**

```
var countly = require('ly.count');
countly.countInit("http://YOURSERVER","API_KEY");
```

### Record Events

**Fields**

- name : Name of the event to track
- _(example - Track clicks on the help button "clickedHelp" )_
- count : Number to increment the event in the db
- _(example - User purchases item increment by 1 )_
- segmentation : Categorization of the event
- _(example - User is from USA and uses an iPhone 4S so the segmentation will be {device:"iPhone 4S", country:"USA"} )_

**Simple Event**

```

//Example: countly.sendEvent(name,count);

countly.sendEvent("HomeButton",1);

```

**Event With Segmentation**

```

// Example: countly.sendAdvancedEvent(name, segmentation, count);

var segmentation = {"buttonName": "HomeButton",
"buttonLocation": "TopBar",
};

countly.sendAdvancedEvent("HomeScreen", segmentation, 1);

```
