// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKOUTLICENSEREQUEST_P_H
#define QTAWS_CHECKOUTLICENSEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "checkoutlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class CheckoutLicenseRequest;

class CheckoutLicenseRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CheckoutLicenseRequestPrivate(const LicenseManagerRequest::Action action,
                                   CheckoutLicenseRequest * const q);
    CheckoutLicenseRequestPrivate(const CheckoutLicenseRequestPrivate &other,
                                   CheckoutLicenseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CheckoutLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
