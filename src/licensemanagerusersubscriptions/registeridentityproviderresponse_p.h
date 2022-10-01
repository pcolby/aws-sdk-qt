// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERIDENTITYPROVIDERRESPONSE_P_H
#define QTAWS_REGISTERIDENTITYPROVIDERRESPONSE_P_H

#include "licensemanagerusersubscriptionsresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class RegisterIdentityProviderResponse;

class RegisterIdentityProviderResponsePrivate : public LicenseManagerUserSubscriptionsResponsePrivate {

public:

    explicit RegisterIdentityProviderResponsePrivate(RegisterIdentityProviderResponse * const q);

    void parseRegisterIdentityProviderResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterIdentityProviderResponse)
    Q_DISABLE_COPY(RegisterIdentityProviderResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
