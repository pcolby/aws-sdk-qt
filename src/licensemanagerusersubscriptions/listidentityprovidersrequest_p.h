// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTIDENTITYPROVIDERSREQUEST_P_H
#define QTAWS_LISTIDENTITYPROVIDERSREQUEST_P_H

#include "licensemanagerusersubscriptionsrequest_p.h"
#include "listidentityprovidersrequest.h"

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class ListIdentityProvidersRequest;

class ListIdentityProvidersRequestPrivate : public LicenseManagerUserSubscriptionsRequestPrivate {

public:
    ListIdentityProvidersRequestPrivate(const LicenseManagerUserSubscriptionsRequest::Action action,
                                   ListIdentityProvidersRequest * const q);
    ListIdentityProvidersRequestPrivate(const ListIdentityProvidersRequestPrivate &other,
                                   ListIdentityProvidersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListIdentityProvidersRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
