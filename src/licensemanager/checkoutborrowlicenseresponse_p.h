// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKOUTBORROWLICENSERESPONSE_P_H
#define QTAWS_CHECKOUTBORROWLICENSERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CheckoutBorrowLicenseResponse;

class CheckoutBorrowLicenseResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CheckoutBorrowLicenseResponsePrivate(CheckoutBorrowLicenseResponse * const q);

    void parseCheckoutBorrowLicenseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CheckoutBorrowLicenseResponse)
    Q_DISABLE_COPY(CheckoutBorrowLicenseResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
