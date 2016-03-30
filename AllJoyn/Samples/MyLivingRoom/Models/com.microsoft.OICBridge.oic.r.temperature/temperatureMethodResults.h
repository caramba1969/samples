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

namespace com { namespace microsoft { namespace OICBridge { namespace oic { namespace r { namespace temperature {

ref class temperatureConsumer;

public ref class temperatureJoinSessionResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property temperatureConsumer^ Consumer
    {
        temperatureConsumer^ get() { return m_consumer; }
    internal:
        void set(_In_ temperatureConsumer^ value) { m_consumer = value; }
    };

private:
    int32 m_status;
    temperatureConsumer^ m_consumer;
};

public ref class temperatureGetRangeResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Platform::String^ Range
    {
        Platform::String^ get() { return m_value; }
    internal:
        void set(_In_ Platform::String^ value) { m_value = value; }
    }

    static temperatureGetRangeResult^ CreateSuccessResult(_In_ Platform::String^ value)
    {
        auto result = ref new temperatureGetRangeResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Range = value;
        return result;
    }

    static temperatureGetRangeResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new temperatureGetRangeResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
    Platform::String^ m_value;
};

public ref class temperatureSetRangeResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    static temperatureSetRangeResult^ CreateSuccessResult()
    {
        auto result = ref new temperatureSetRangeResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }

    static temperatureSetRangeResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new temperatureSetRangeResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class temperatureGetTemperatureResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property double Temperature
    {
        double get() { return m_value; }
    internal:
        void set(_In_ double value) { m_value = value; }
    }

    static temperatureGetTemperatureResult^ CreateSuccessResult(_In_ double value)
    {
        auto result = ref new temperatureGetTemperatureResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Temperature = value;
        return result;
    }

    static temperatureGetTemperatureResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new temperatureGetTemperatureResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
    double m_value;
};

public ref class temperatureSetTemperatureResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    static temperatureSetTemperatureResult^ CreateSuccessResult()
    {
        auto result = ref new temperatureSetTemperatureResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }

    static temperatureSetTemperatureResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new temperatureSetTemperatureResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

public ref class temperatureGetUnitsResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    property Platform::String^ Units
    {
        Platform::String^ get() { return m_value; }
    internal:
        void set(_In_ Platform::String^ value) { m_value = value; }
    }

    static temperatureGetUnitsResult^ CreateSuccessResult(_In_ Platform::String^ value)
    {
        auto result = ref new temperatureGetUnitsResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        result->Units = value;
        return result;
    }

    static temperatureGetUnitsResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new temperatureGetUnitsResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
    Platform::String^ m_value;
};

public ref class temperatureSetUnitsResult sealed
{
public:
    property int32 Status
    {
        int32 get() { return m_status; }
    internal:
        void set(_In_ int32 value) { m_status = value; }
    }

    static temperatureSetUnitsResult^ CreateSuccessResult()
    {
        auto result = ref new temperatureSetUnitsResult();
        result->Status = Windows::Devices::AllJoyn::AllJoynStatus::Ok;
        return result;
    }

    static temperatureSetUnitsResult^ CreateFailureResult(_In_ int32 status)
    {
        auto result = ref new temperatureSetUnitsResult();
        result->Status = status;
        return result;
    }

private:
    int32 m_status;
};

} } } } } } 
