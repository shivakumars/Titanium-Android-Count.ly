// This is a test harness for your module
// You should do something interesting in this harness 
// to test out the module and to provide instructions 
// to users on how to use it by example.


// open a single window
var win = Ti.UI.createWindow({
	backgroundColor:'white'
});
win.open();

// TODO: write your module tests here
var countly = require('ly.count');
Ti.API.info("module is => " + countly);

if (Ti.Platform.name == "android") {
	countly.countInit("http://YOURSERVER","API_KEY");
}

