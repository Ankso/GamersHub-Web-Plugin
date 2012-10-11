/**********************************************************\

  Auto-generated GamersHubtoolsAPI.cpp

\**********************************************************/

#include "JSObject.h"
#include "variant_list.h"
#include "DOM/Document.h"
#include "global/config.h"

#include "GamersHubtoolsAPI.h"

///////////////////////////////////////////////////////////////////////////////
/// @fn FB::variant GamersHubtoolsAPI::echo(const FB::variant& msg)
///
/// @brief  Echos whatever is passed from Javascript.
///         Go ahead and change it. See what happens!
///////////////////////////////////////////////////////////////////////////////
FB::variant GamersHubtoolsAPI::echo(const FB::variant& msg)
{
    static int n(0);
    fire_echo("So far, you clicked this many times: ", n++);

    // return "foobar";
    return msg;
}

///////////////////////////////////////////////////////////////////////////////
/// @fn GamersHubtoolsPtr GamersHubtoolsAPI::getPlugin()
///
/// @brief  Gets a reference to the plugin that was passed in when the object
///         was created.  If the plugin has already been released then this
///         will throw a FB::script_error that will be translated into a
///         javascript exception in the page.
///////////////////////////////////////////////////////////////////////////////
GamersHubtoolsPtr GamersHubtoolsAPI::getPlugin()
{
    GamersHubtoolsPtr plugin(m_plugin.lock());
    if (!plugin) {
        throw FB::script_error("The plugin is invalid");
    }
    return plugin;
}

// Read/Write property testString
std::string GamersHubtoolsAPI::get_testString()
{
    return m_testString;
}

void GamersHubtoolsAPI::set_testString(const std::string& val)
{
    m_testString = val;
}

// Read-only property version
std::string GamersHubtoolsAPI::get_version()
{
    return FBSTRING_PLUGIN_VERSION;
}

void GamersHubtoolsAPI::testEvent()
{
    fire_test();
}

std::string GamersHubtoolsAPI::GetProcessList()
{
    /** 
     * By the way, this is the only function that the plugin itself has.
     * It retrieves all process and returns their names in a string separated
     * by ";". The client-side javascript does the rest.
     * Note that this only works in Windows XP or latest operative systems.
     */
    HANDLE hProcessSnap;
    PROCESSENTRY32 pe32;

    // Take a snapshot of all processes in the system.
    hProcessSnap = CreateToolhelp32Snapshot( TH32CS_SNAPPROCESS, 0 );
    if( hProcessSnap == INVALID_HANDLE_VALUE )
        return std::string("error");

    // Set the size of the structure before using it.
    pe32.dwSize = sizeof( PROCESSENTRY32 );

    // Retrieve information about the first process,
    // and exit if unsuccessful
    if( !Process32First( hProcessSnap, &pe32 ) )
    {
        CloseHandle( hProcessSnap );          // clean the snapshot object
        return std::string("error");
    }

    // Now walk the snapshot of processes, and
    // display information about each process in turn
    std::string processList;
    do
    {
        char ch[260];
        char DefChar = ' ';
        WideCharToMultiByte(CP_ACP, 0, pe32.szExeFile, -1, ch, 260, &DefChar, NULL);
        processList = processList + ch + ";";
    } while( Process32Next( hProcessSnap, &pe32 ) );

    CloseHandle( hProcessSnap );
    return processList;
}