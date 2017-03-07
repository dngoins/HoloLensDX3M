// C++ for the Windows Runtime v1.0.161012.5
// Copyright (c) 2016 Microsoft Corporation. All rights reserved.

#pragma once


WINRT_EXPORT namespace winrt {

namespace Windows::UI::Xaml::Printing {

template <typename D, typename ... Interfaces> struct PrintDocumentT :
    overrides<D, Windows::IInspectable, Interfaces ...>,
    impl::require<D, Windows::UI::Xaml::Printing::IPrintDocument, Windows::UI::Xaml::IDependencyObject, Windows::UI::Xaml::IDependencyObject2>
{
    using composable = PrintDocument;

protected:

    PrintDocumentT()
    {
        get_activation_factory<PrintDocument, IPrintDocumentFactory>().CreateInstance(*this, this->m_inner);
    }
};

}

}
