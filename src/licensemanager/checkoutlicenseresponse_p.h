// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKOUTLICENSERESPONSE_P_H
#define QTAWS_CHECKOUTLICENSERESPONSE_P_H

#include "licensemanagerresponse_p.h"

namespace QtAws {
namespace LicenseManager {

class CheckoutLicenseResponse;

class CheckoutLicenseResponsePrivate : public LicenseManagerResponsePrivate {

public:

    explicit CheckoutLicenseResponsePrivate(CheckoutLicenseResponse * const q);

    void parseCheckoutLicenseResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CheckoutLicenseResponse)
    Q_DISABLE_COPY(CheckoutLicenseResponsePrivate)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
