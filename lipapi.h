/****************************************************************/
// By Leonux.org
// Leonux Fiscal Printing
// Web Site:        http://leonux.org
// lip Project:  http://github.com/leonux/lip
// Created on:     2013-01-04
/****************************************************************/

/**********************************************************\

  Auto-generated lipapi.h

\**********************************************************/

#include <string>
#include <sstream>
#include <boost/weak_ptr.hpp>
#include "JSAPIAuto.h"
#include "BrowserHost.h"
#include "lip.h"
#include "FBPointers.h"

#ifndef H_lipapi
#define H_lipapi


FB_FORWARD_PTR(SerialAPI);

class lipapi : public FB::JSAPIAuto
{
public:
    //
    lipapi(const lipPtr& plugin, const FB::BrowserHostPtr& host);

    ///////////////////////////////////////////////////////////////////////////////
    /// @fn lipapi::~lipapi()
    ///
    /// @brief  Destructor.  Remember that this object will not be released until
    ///         the browser is done with it; this will almost definitely be after
    ///         the plugin is released.
    ///////////////////////////////////////////////////////////////////////////////
    virtual ~lipapi() {};
    lipPtr getPlugin();
    // Read/Write property ${PROPERTY.ident}
    std::string get_testString();
    void set_testString(const std::string& val);

    // Read-only property ${PROPERTY.ident}
    std::string get_version();

    // Method echo
    FB::variant echo(const FB::variant& msg);
    
    // Event helpers
    FB_JSAPI_EVENT(test, 0, ());
    FB_JSAPI_EVENT(echo, 2, (const FB::variant&, const int));

    // Method test-event
    void testEvent();
    boost::weak_ptr<SerialAPI> get_Serial();

private:
    lipWeakPtr m_plugin;
    FB::BrowserHostPtr m_host;

    std::string m_testString;

    SerialAPIPtr m_Serial;
};

#endif // H_lipapi

