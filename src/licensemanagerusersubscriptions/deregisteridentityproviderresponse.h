// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERIDENTITYPROVIDERRESPONSE_H
#define QTAWS_DEREGISTERIDENTITYPROVIDERRESPONSE_H

#include "licensemanagerusersubscriptionsresponse.h"
#include "deregisteridentityproviderrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class DeregisterIdentityProviderResponsePrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT DeregisterIdentityProviderResponse : public LicenseManagerUserSubscriptionsResponse {
    Q_OBJECT

public:
    DeregisterIdentityProviderResponse(const DeregisterIdentityProviderRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeregisterIdentityProviderRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeregisterIdentityProviderResponse)
    Q_DISABLE_COPY(DeregisterIdentityProviderResponse)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
