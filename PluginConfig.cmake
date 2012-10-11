#/**********************************************************\ 
#
# Auto-Generated Plugin Configuration file
# for GamersHub tools
#
#\**********************************************************/

set(PLUGIN_NAME "GamersHubtools")
set(PLUGIN_PREFIX "GHT")
set(COMPANY_NAME "MontrotechCorporation")

# ActiveX constants:
set(FBTYPELIB_NAME GamersHubtoolsLib)
set(FBTYPELIB_DESC "GamersHubtools 1.0 Type Library")
set(IFBControl_DESC "GamersHubtools Control Interface")
set(FBControl_DESC "GamersHubtools Control Class")
set(IFBComJavascriptObject_DESC "GamersHubtools IComJavascriptObject Interface")
set(FBComJavascriptObject_DESC "GamersHubtools ComJavascriptObject Class")
set(IFBComEventSource_DESC "GamersHubtools IFBComEventSource Interface")
set(AXVERSION_NUM "1")

# NOTE: THESE GUIDS *MUST* BE UNIQUE TO YOUR PLUGIN/ACTIVEX CONTROL!  YES, ALL OF THEM!
set(FBTYPELIB_GUID efbf497c-29be-5f0c-bbd3-2592c134a32c)
set(IFBControl_GUID 71d770c5-af4f-5983-9f70-bcb6d2317d87)
set(FBControl_GUID 53a9b308-289b-5ed3-babc-5e6965dcd99e)
set(IFBComJavascriptObject_GUID 531304e2-e465-5334-92bb-9d105c5fb641)
set(FBComJavascriptObject_GUID fad7d81c-c9e7-537e-8167-f0e5561ccdb4)
set(IFBComEventSource_GUID 15983600-09c9-50d6-bb1b-db8516c93247)

# these are the pieces that are relevant to using it from Javascript
set(ACTIVEX_PROGID "MontrotechCorporation.GamersHubtools")
set(MOZILLA_PLUGINID "gamershub.com/GamersHubtools")

# strings
set(FBSTRING_CompanyName "Montrotech Corporation")
set(FBSTRING_FileDescription "A series of tools to control the games that you and your friends are playing.")
set(FBSTRING_PLUGIN_VERSION "1.0.0.0")
set(FBSTRING_LegalCopyright "Copyright 2012 Montrotech Corporation")
set(FBSTRING_PluginFileName "np${PLUGIN_NAME}.dll")
set(FBSTRING_ProductName "GamersHub tools")
set(FBSTRING_FileExtents "")
set(FBSTRING_PluginName "GamersHub tools")
set(FBSTRING_MIMEType "application/x-gamershubtools")

# Uncomment this next line if you're not planning on your plugin doing
# any drawing:

set (FB_GUI_DISABLED 1)

# Mac plugin settings. If your plugin does not draw, set these all to 0
set(FBMAC_USE_QUICKDRAW 0)
set(FBMAC_USE_CARBON 0)
set(FBMAC_USE_COCOA 0)
set(FBMAC_USE_COREGRAPHICS 0)
set(FBMAC_USE_COREANIMATION 0)
set(FBMAC_USE_INVALIDATINGCOREANIMATION 0)

# If you want to register per-machine on Windows, uncomment this line
#set (FB_ATLREG_MACHINEWIDE 1)
