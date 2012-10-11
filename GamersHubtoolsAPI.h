/**********************************************************\

  Auto-generated GamersHubtoolsAPI.h

\**********************************************************/

#include <string>
#include <sstream>
#include <Windows.h>
#include <TlHelp32.h>
#include <tchar.h>
#include <boost/weak_ptr.hpp>
#include "JSAPIAuto.h"
#include "BrowserHost.h"
#include "GamersHubtools.h"

#ifndef H_GamersHubtoolsAPI
#define H_GamersHubtoolsAPI

class GamersHubtoolsAPI : public FB::JSAPIAuto
{
public:
    ////////////////////////////////////////////////////////////////////////////
    /// @fn GamersHubtoolsAPI::GamersHubtoolsAPI(const GamersHubtoolsPtr& plugin, const FB::BrowserHostPtr host)
    ///
    /// @brief  Constructor for your JSAPI object.
    ///         You should register your methods, properties, and events
    ///         that should be accessible to Javascript from here.
    ///
    /// @see FB::JSAPIAuto::registerMethod
    /// @see FB::JSAPIAuto::registerProperty
    /// @see FB::JSAPIAuto::registerEvent
    ////////////////////////////////////////////////////////////////////////////
    GamersHubtoolsAPI(const GamersHubtoolsPtr& plugin, const FB::BrowserHostPtr& host) :
        m_plugin(plugin), m_host(host)
    {
        registerMethod("echo",      make_method(this, &GamersHubtoolsAPI::echo));
        registerMethod("testEvent", make_method(this, &GamersHubtoolsAPI::testEvent));
        registerMethod("GetProcessList", make_method(this, &GamersHubtoolsAPI::GetProcessList));
        
        // Read-write property
        registerProperty("testString",
                         make_property(this,
                                       &GamersHubtoolsAPI::get_testString,
                                       &GamersHubtoolsAPI::set_testString));
        
        // Read-only property
        registerProperty("version",
                         make_property(this,
                                       &GamersHubtoolsAPI::get_version));
    }

    ///////////////////////////////////////////////////////////////////////////////
    /// @fn GamersHubtoolsAPI::~GamersHubtoolsAPI()
    ///
    /// @brief  Destructor.  Remember that this object will not be released until
    ///         the browser is done with it; this will almost definitely be after
    ///         the plugin is released.
    ///////////////////////////////////////////////////////////////////////////////
    virtual ~GamersHubtoolsAPI() {};

    GamersHubtoolsPtr getPlugin();

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
    std::string GetProcessList();

private:
    GamersHubtoolsWeakPtr m_plugin;
    FB::BrowserHostPtr m_host;

    std::string m_testString;
};

#endif // H_GamersHubtoolsAPI

