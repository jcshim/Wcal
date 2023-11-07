// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;
#include <microsoft.ui.xaml.window.h>

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::Wcal::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        auto windowNative{ this->try_as<::IWindowNative>() };
        HWND hWnd{ 0 };
        windowNative->get_WindowHandle(&hWnd);
        SetWindowPos(hWnd, NULL, 300, 500, 250, 300, NULL);
        this->Title(L"Calculator");
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

}
using namespace std;
void winrt::Wcal::implementation::MainWindow::Add_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double va, vb, vc;
    va = stod(a().Text().c_str());
    vb = stod(b().Text().c_str());
    vc = va + vb;
    c().Text(to_wstring(vc));
}


void winrt::Wcal::implementation::MainWindow::Sub_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double va, vb, vc;
    va = stod(a().Text().c_str());
    vb = stod(b().Text().c_str());
    vc = va - vb;
    c().Text(to_wstring(vc));

}


void winrt::Wcal::implementation::MainWindow::Mul_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double va, vb, vc;
    va = stod(a().Text().c_str());
    vb = stod(b().Text().c_str());
    vc = va * vb;
    c().Text(to_wstring(vc));
}


void winrt::Wcal::implementation::MainWindow::Div_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    double va, vb, vc;
    va = stod(a().Text().c_str());
    vb = stod(b().Text().c_str());
    if (vb == 0) return;
    vc = va / vb;
    c().Text(to_wstring(vc));
}
