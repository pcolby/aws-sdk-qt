// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKOUTBORROWLICENSEREQUEST_H
#define QTAWS_CHECKOUTBORROWLICENSEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CheckoutBorrowLicenseRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CheckoutBorrowLicenseRequest : public LicenseManagerRequest {

public:
    CheckoutBorrowLicenseRequest(const CheckoutBorrowLicenseRequest &other);
    CheckoutBorrowLicenseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckoutBorrowLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
