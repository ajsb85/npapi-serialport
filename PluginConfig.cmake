#/**********************************************************\ 
#
# Auto-Generated Plugin Configuration file
# for lip
#
#\**********************************************************/

set(PLUGIN_NAME "lip")
set(PLUGIN_PREFIX "lip")
set(COMPANY_NAME "Leonux")

# ActiveX constants:
set(FBTYPELIB_NAME lipLib)
set(FBTYPELIB_DESC "lip 1.0 Type Library")
set(IFBControl_DESC "lip Control Interface")
set(FBControl_DESC "lip Control Class")
set(IFBComJavascriptObject_DESC "lip IComJavascriptObject Interface")
set(FBComJavascriptObject_DESC "lip ComJavascriptObject Class")
set(IFBComEventSource_DESC "lip IFBComEventSource Interface")
set(AXVERSION_NUM "1")

# NOTE: THESE GUIDS *MUST* BE UNIQUE TO YOUR PLUGIN/ACTIVEX CONTROL!  YES, ALL OF THEM!
set(FBTYPELIB_GUID dd5cfca4-43ae-5ef3-92f1-dae585af2824)
set(IFBControl_GUID 9fdb8bb9-650d-500c-9c26-a1f8d6900db2)
set(FBControl_GUID 5a2f729e-c170-588d-81e3-8cd86cd2b385)
set(IFBComJavascriptObject_GUID 32c8deb0-6920-5d5a-a979-16b848a61c61)
set(FBComJavascriptObject_GUID bc86afca-0094-5dd1-8858-9124e1df8953)
set(IFBComEventSource_GUID 4b14f3d9-635e-58cc-96a4-88a33e39b8c5)
if ( FB_PLATFORM_ARCH_32 )
    set(FBControl_WixUpgradeCode_GUID 496a53e9-e2a0-5931-8d41-e24da9c90fc6)
else ( FB_PLATFORM_ARCH_32 )
    set(FBControl_WixUpgradeCode_GUID d9b7462a-da16-5bf6-8092-7c3ba2e291cb)
endif ( FB_PLATFORM_ARCH_32 )

# these are the pieces that are relevant to using it from Javascript
set(ACTIVEX_PROGID "Leonux.lip")
set(MOZILLA_PLUGINID "leonux.org/lip")

# strings
set(FBSTRING_CompanyName "Leonux")
set(FBSTRING_PluginDescription "Leonux Fiscal Printing")
set(FBSTRING_PLUGIN_VERSION "1.0.0.0")
set(FBSTRING_LegalCopyright "Copyright 2015 leonux.org")
set(FBSTRING_PluginFileName "np${PLUGIN_NAME}.dll")
set(FBSTRING_ProductName "Leonux Fiscal Printing")
set(FBSTRING_FileExtents "")
if ( FB_PLATFORM_ARCH_32 )
    set(FBSTRING_PluginName "lip")  # No 32bit postfix to maintain backward compatability.
else ( FB_PLATFORM_ARCH_32 )
    set(FBSTRING_PluginName "lip_${FB_PLATFORM_ARCH_NAME}")
endif ( FB_PLATFORM_ARCH_32 )
set(FBSTRING_MIMEType "application/x-lip")

# Uncomment this next line if you're not planning on your plugin doing
# any drawing:

set (FB_GUI_DISABLED 1)

# Mac plugin settings. If your plugin does not draw, set these all to 0
set(FBMAC_USE_QUICKDRAW 0)
set(FBMAC_USE_CARBON 1)
set(FBMAC_USE_COCOA 1)
set(FBMAC_USE_COREGRAPHICS 1)
set(FBMAC_USE_COREANIMATION 0)
set(FBMAC_USE_INVALIDATINGCOREANIMATION 0)

# If you want to register per-machine on Windows, uncomment this line
#set (FB_ATLREG_MACHINEWIDE 1)
