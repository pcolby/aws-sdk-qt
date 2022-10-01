// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKOUTLICENSEREQUEST_H
#define QTAWS_CHECKOUTLICENSEREQUEST_H

#include "licensemanagerrequest.h"

namespace QtAws {
namespace LicenseManager {

class CheckoutLicenseRequestPrivate;

class QTAWSLICENSEMANAGER_EXPORT CheckoutLicenseRequest : public LicenseManagerRequest {

public:
    CheckoutLicenseRequest(const CheckoutLicenseRequest &other);
    CheckoutLicenseRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckoutLicenseRequest)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
