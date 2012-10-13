Titanium-Android-Count.ly
=========================

Count.ly SDK for Titanium Android

##What's Countly?
##Home

[http://count.ly](http://count.ly "Countly")

##Installation

Please note that this Module is under development.

###1. Add this to your manifest:

* Add this into Android Manifest.

<pre class="prettyprint">
&lt;service android:name=&quot;org.openudid.OpenUDID_service&quot;&gt;
    &lt;intent-filter&gt;
        &lt;action android:name=&quot;org.openudid.GETUDID&quot; /&gt;
    &lt;/intent-filter&gt;
&lt;/service&gt;</pre>

###2. Now it's time to add Countly Module to your project using steps below:

* Include the Module in TiApp.xml and

<pre class="prettyprint">
var countly = require(&quot;ly.count&quot;);
Ti.API.info("module is =&gt; " + countly);

if (Ti.Platform.name == &quot;android&quot;) {
  countly.countInit(&quot;http://YOURSERVER&quot;,&quot;API_KEY&quot;);
}
</pre>Additionally, make sure that *INTERNET* permission is set if there's none in your manifest file.