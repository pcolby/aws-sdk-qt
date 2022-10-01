// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKOUTBORROWLICENSERESPONSE_H
#define QTAWS_CHECKOUTBORROWLICENSERESPONSE_H

#include "licensemanagerresponse.h"
#include "checkoutborrowlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class CheckoutBorrowLicenseResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT CheckoutBorrowLicenseResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    CheckoutBorrowLicenseResponse(const CheckoutBorrowLicenseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CheckoutBorrowLicenseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckoutBorrowLicenseResponse)
    Q_DISABLE_COPY(CheckoutBorrowLicenseResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
