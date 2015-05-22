/****************************************************************/
// By Leonux.org
// Leonux Fiscal Printing
// Web Site:        http://leonux.org
// lip Project:  http://github.com/leonux/lip
// Created on:     2013-01-04
/****************************************************************/

/**********************************************************\

  Auto-generated lipapi.cpp

\**********************************************************/

#include "JSObject.h"
#include "variant_list.h"
#include "DOM/Document.h"
#include "global/config.h"

#include "lipapi.h"
#include "SerialAPI.h"

////////////////////////////////////////////////////////////////////////////
/// @fn lipapi::lipapi(const lipPtr& plugin, const FB::BrowserHostPtr host)
///
/// @brief  Constructor for your JSAPI object.
///         You should register your methods, properties, and events
///         that should be accessible to Javascript from here.
///
/// @see FB::JSAPIAuto::registerMethod
/// @see FB::JSAPIAuto::registerProperty
/// @see FB::JSAPIAuto::registerEvent
////////////////////////////////////////////////////////////////////////////
lipapi::lipapi(const lipPtr& plugin, const FB::BrowserHostPtr& host) :
m_plugin(plugin), m_host(host)
{
    registerMethod("echo",      make_method(this, &lipapi::echo));
    registerMethod("testEvent", make_method(this, &lipapi::testEvent));

    registerProperty("Serial",  make_property(this, &lipapi::get_Serial));

    // Read-write property
    registerProperty("testString",
        make_property(this,
        &lipapi::get_testString,
        &lipapi::set_testString));

    // Read-only property
    registerProperty("version",
        make_property(this,
        &lipapi::get_version));

    m_Serial = boost::make_shared<SerialAPI>(m_host);
}

///////////////////////////////////////////////////////////////////////////////
/// @fn FB::variant lipapi::echo(const FB::variant& msg)
///
/// @brief  Echos whatever is passed from Javascript.
///         Go ahead and change it. See what happens!
///////////////////////////////////////////////////////////////////////////////
FB::variant lipapi::echo(const FB::variant& msg)
{
    static int n(0);
    //fire_echo("So far, you clicked this many times: ", n++);
    // return "foobar";
    return msg;
}

///////////////////////////////////////////////////////////////////////////////
/// @fn lipPtr lipapi::getPlugin()
///
/// @brief  Gets a reference to the plugin that was passed in when the object
///         was created.  If the plugin has already been released then this
///         will throw a FB::script_error that will be translated into a
///         javascript exception in the page.
///////////////////////////////////////////////////////////////////////////////
lipPtr lipapi::getPlugin()
{
    lipPtr plugin(m_plugin.lock());
    if (!plugin) {
        throw FB::script_error("The plugin is invalid");
    }
    return plugin;
}

// Read/Write property testString
std::string lipapi::get_testString()
{
    return m_testString;
}

void lipapi::set_testString(const std::string& val)
{
    m_testString = val;
}

// Read-only property version
std::string lipapi::get_version()
{
    return FBSTRING_PLUGIN_VERSION;
}

void lipapi::testEvent()
{
    fire_test();
}

boost::weak_ptr<SerialAPI> lipapi::get_Serial()
{
    return m_Serial;
}