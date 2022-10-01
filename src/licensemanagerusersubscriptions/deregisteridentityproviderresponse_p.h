// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERIDENTITYPROVIDERRESPONSE_P_H
#define QTAWS_DEREGISTERIDENTITYPROVIDERRESPONSE_P_H

#include "licensemanagerusersubscriptionsresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class DeregisterIdentityProviderResponse;

class DeregisterIdentityProviderResponsePrivate : public LicenseManagerUserSubscriptionsResponsePrivate {

public:

    explicit DeregisterIdentityProviderResponsePrivate(DeregisterIdentityProviderResponse * const q);

    void parseDeregisterIdentityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterIdentityProviderResponse)
    Q_DISABLE_COPY(DeregisterIdentityProviderResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
