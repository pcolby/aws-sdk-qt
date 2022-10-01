// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CHECKOUTLICENSERESPONSE_H
#define QTAWS_CHECKOUTLICENSERESPONSE_H

#include "licensemanagerresponse.h"
#include "checkoutlicenserequest.h"

namespace QtAws {
namespace LicenseManager {

class CheckoutLicenseResponsePrivate;

class QTAWSLICENSEMANAGER_EXPORT CheckoutLicenseResponse : public LicenseManagerResponse {
    Q_OBJECT

public:
    CheckoutLicenseResponse(const CheckoutLicenseRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CheckoutLicenseRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CheckoutLicenseResponse)
    Q_DISABLE_COPY(CheckoutLicenseResponse)

};

} // namespace LicenseManager
} // namespace QtAws

#endif
