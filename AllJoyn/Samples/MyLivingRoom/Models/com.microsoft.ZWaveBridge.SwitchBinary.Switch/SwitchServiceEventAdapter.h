//-----------------------------------------------------------------------------
// <auto-generated> 
//   This code was generated by a tool. 
// 
//   Changes to this file may cause incorrect behavior and will be lost if  
//   the code is regenerated.
//
//   Tool: AllJoynCodeGenerator.exe
//
//   This tool is located in the Windows 10 SDK and the Windows 10 AllJoyn 
//   Visual Studio Extension in the Visual Studio Gallery.  
//
//   The generated code should be packaged in a Windows 10 C++/CX Runtime  
//   Component which can be consumed in any UWP-supported language using 
//   APIs that are available in Windows.Devices.AllJoyn.
//
//   Using AllJoynCodeGenerator - Invoke the following command with a valid 
//   Introspection XML file and a writable output directory:
//     AllJoynCodeGenerator -i <INPUT XML FILE> -o <OUTPUT DIRECTORY>
// </auto-generated>
//-----------------------------------------------------------------------------
#pragma once

namespace com { namespace microsoft { namespace ZWaveBridge { namespace SwitchBinary { namespace Switch {

// This class, and the associated EventArgs classes, exist for the benefit of JavaScript developers who
// do not have the ability to implement ISwitchService. Instead, SwitchServiceEventAdapter
// provides the Interface implementation and exposes a set of compatible events to the developer.
public ref class SwitchServiceEventAdapter sealed : [Windows::Foundation::Metadata::Default] ISwitchService
{
public:
    // Method Invocation Events
    // Property Read Events
    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetGenreRequestedEventArgs^>^ GetGenreRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetGenreRequestedEventArgs^>^ handler) 
        { 
            return _GetGenreRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchGetGenreRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetGenreRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchGetGenreRequestedEventArgs^ args) 
        { 
            _GetGenreRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetHelpRequestedEventArgs^>^ GetHelpRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetHelpRequestedEventArgs^>^ handler) 
        { 
            return _GetHelpRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchGetHelpRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetHelpRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchGetHelpRequestedEventArgs^ args) 
        { 
            _GetHelpRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetIndexRequestedEventArgs^>^ GetIndexRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetIndexRequestedEventArgs^>^ handler) 
        { 
            return _GetIndexRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchGetIndexRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetIndexRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchGetIndexRequestedEventArgs^ args) 
        { 
            _GetIndexRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetInstanceRequestedEventArgs^>^ GetInstanceRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetInstanceRequestedEventArgs^>^ handler) 
        { 
            return _GetInstanceRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchGetInstanceRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetInstanceRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchGetInstanceRequestedEventArgs^ args) 
        { 
            _GetInstanceRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetLabelRequestedEventArgs^>^ GetLabelRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetLabelRequestedEventArgs^>^ handler) 
        { 
            return _GetLabelRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchGetLabelRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetLabelRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchGetLabelRequestedEventArgs^ args) 
        { 
            _GetLabelRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetMaxRequestedEventArgs^>^ GetMaxRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetMaxRequestedEventArgs^>^ handler) 
        { 
            return _GetMaxRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchGetMaxRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMaxRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchGetMaxRequestedEventArgs^ args) 
        { 
            _GetMaxRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetMinRequestedEventArgs^>^ GetMinRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetMinRequestedEventArgs^>^ handler) 
        { 
            return _GetMinRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchGetMinRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetMinRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchGetMinRequestedEventArgs^ args) 
        { 
            _GetMinRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetUnitsRequestedEventArgs^>^ GetUnitsRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetUnitsRequestedEventArgs^>^ handler) 
        { 
            return _GetUnitsRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchGetUnitsRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetUnitsRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchGetUnitsRequestedEventArgs^ args) 
        { 
            _GetUnitsRequested(sender, args);
        } 
    }

    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetValueRequestedEventArgs^>^ GetValueRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchGetValueRequestedEventArgs^>^ handler) 
        { 
            return _GetValueRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchGetValueRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _GetValueRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchGetValueRequestedEventArgs^ args) 
        { 
            _GetValueRequested(sender, args);
        } 
    }

    // Property Write Events
    event Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchSetValueRequestedEventArgs^>^ SetValueRequested 
    { 
        Windows::Foundation::EventRegistrationToken add(Windows::Foundation::TypedEventHandler<SwitchServiceEventAdapter^, SwitchSetValueRequestedEventArgs^>^ handler) 
        { 
            return _SetValueRequested += ref new Windows::Foundation::EventHandler<Platform::Object^>
            ([handler](Platform::Object^ sender, Platform::Object^ args)
            {
                handler->Invoke(safe_cast<SwitchServiceEventAdapter^>(sender), safe_cast<SwitchSetValueRequestedEventArgs^>(args));
            }, Platform::CallbackContext::Same);
        } 
        void remove(Windows::Foundation::EventRegistrationToken token) 
        { 
            _SetValueRequested -= token; 
        } 
    internal: 
        void raise(SwitchServiceEventAdapter^ sender, SwitchSetValueRequestedEventArgs^ args) 
        { 
            _SetValueRequested(sender, args);
        } 
    }

    // ISwitchService Implementation

    virtual Windows::Foundation::IAsyncOperation<SwitchGetGenreResult^>^ GetGenreAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SwitchGetHelpResult^>^ GetHelpAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SwitchGetIndexResult^>^ GetIndexAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SwitchGetInstanceResult^>^ GetInstanceAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SwitchGetLabelResult^>^ GetLabelAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SwitchGetMaxResult^>^ GetMaxAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SwitchGetMinResult^>^ GetMinAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SwitchGetUnitsResult^>^ GetUnitsAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);
    virtual Windows::Foundation::IAsyncOperation<SwitchGetValueResult^>^ GetValueAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info);

    virtual Windows::Foundation::IAsyncOperation<SwitchSetValueResult^>^ SetValueAsync(_In_ Windows::Devices::AllJoyn::AllJoynMessageInfo^ info, _In_ bool value);

private:
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetGenreRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetHelpRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetIndexRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetInstanceRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetLabelRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMaxRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetMinRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetUnitsRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _GetValueRequested;
    event Windows::Foundation::EventHandler<Platform::Object^>^ _SetValueRequested;
};

} } } } } 
