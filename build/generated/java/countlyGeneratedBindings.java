package ly.count;

import java.util.HashMap;

import org.appcelerator.kroll.runtime.rhino.KrollBindings;

public class countlyGeneratedBindings
{
	public static void init()
	{
		KrollBindings.addExternalBinding("ly.count.CountlyModule", ly.count.CountlyModulePrototype.class);
	}
}