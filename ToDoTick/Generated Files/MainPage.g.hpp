﻿//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------
#include "pch.h"

#pragma warning(push)
#pragma warning(disable: 4100) // unreferenced formal parameter

#if defined _DEBUG && !defined DISABLE_XAML_GENERATED_BINDING_DEBUG_OUTPUT
extern "C" __declspec(dllimport) int __stdcall IsDebuggerPresent();
#endif

#include "MainPage.xaml.h"

void ::ToDoTick::MainPage::InitializeComponent()
{
    if (_contentLoaded)
    {
        return;
    }
    _contentLoaded = true;
    ::Windows::Foundation::Uri^ resourceLocator = ref new ::Windows::Foundation::Uri(L"ms-appx:///MainPage.xaml");
    ::Windows::UI::Xaml::Application::LoadComponent(this, resourceLocator, ::Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation::Application);
}

void ::ToDoTick::MainPage::Connect(int __connectionId, ::Platform::Object^ __target)
{
    switch (__connectionId)
    {
    case 2:
        {
            this->funTimeText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
        }
        break;
    case 3:
        {
            this->funMillisecText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
        }
        break;
    case 4:
        {
            this->funStartPauseBtn = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
        }
        break;
    case 5:
        {
            this->funStartPauseIcon = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
        }
        break;
    case 6:
        {
            this->timeText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
        }
        break;
    case 7:
        {
            this->millisecText = safe_cast<::Windows::UI::Xaml::Controls::TextBlock^>(__target);
        }
        break;
    case 8:
        {
            this->startPauseBtn = safe_cast<::Windows::UI::Xaml::Controls::Button^>(__target);
        }
        break;
    case 9:
        {
            this->startPauseIcon = safe_cast<::Windows::UI::Xaml::Controls::Image^>(__target);
        }
        break;
    }
    _contentLoaded = true;
}

::Windows::UI::Xaml::Markup::IComponentConnector^ ::ToDoTick::MainPage::GetBindingConnector(int __connectionId, ::Platform::Object^ __target)
{
    __connectionId;         // unreferenced
    __target;               // unreferenced
    return nullptr;
}

#pragma warning(pop)


