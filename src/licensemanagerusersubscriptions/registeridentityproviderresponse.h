// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERIDENTITYPROVIDERRESPONSE_H
#define QTAWS_REGISTERIDENTITYPROVIDERRESPONSE_H

#include "licensemanagerusersubscriptionsresponse.h"
#include "registeridentityproviderrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class RegisterIdentityProviderResponsePrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT RegisterIdentityProviderResponse : public LicenseManagerUserSubscriptionsResponse {
    Q_OBJECT

public:
    RegisterIdentityProviderResponse(const RegisterIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterIdentityProviderResponse)
    Q_DISABLE_COPY(RegisterIdentityProviderResponse)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
