// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERSRESPONSE_P_H
#define QTAWS_LISTIDENTITYPROVIDERSRESPONSE_P_H

#include "licensemanagerusersubscriptionsresponse_p.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListIdentityProvidersResponse;

class ListIdentityProvidersResponsePrivate : public LicenseManagerUserSubscriptionsResponsePrivate {

public:

    explicit ListIdentityProvidersResponsePrivate(ListIdentityProvidersResponse * const q);

    void parseListIdentityProvidersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListIdentityProvidersResponse)
    Q_DISABLE_COPY(ListIdentityProvidersResponsePrivate)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
