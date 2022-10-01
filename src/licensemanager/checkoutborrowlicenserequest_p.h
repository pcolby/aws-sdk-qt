// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKOUTBORROWLICENSEREQUEST_P_H
#define QTAWS_CHECKOUTBORROWLICENSEREQUEST_P_H

#include "licensemanagerrequest_p.h"
#include "checkoutborrowlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class CheckoutBorrowLicenseRequest;

class CheckoutBorrowLicenseRequestPrivate : public LicenseManagerRequestPrivate {

public:
    CheckoutBorrowLicenseRequestPrivate(const LicenseManagerRequest::Action action,
                                   CheckoutBorrowLicenseRequest * const q);
    CheckoutBorrowLicenseRequestPrivate(const CheckoutBorrowLicenseRequestPrivate &other,
                                   CheckoutBorrowLicenseRequest * const q);

private:
    Q_DECLARE_PUBLIC(CheckoutBorrowLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
