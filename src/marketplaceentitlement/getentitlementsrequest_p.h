// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITLEMENTSREQUEST_P_H
#define QTAWS_GETENTITLEMENTSREQUEST_P_H

#include "marketplaceentitlementrequest_p.h"
#include "getentitlementsrequest.h"

namespace QtAws {
namespace MarketplaceEntitlement {

class GetEntitlementsRequest;

class GetEntitlementsRequestPrivate : public MarketplaceEntitlementRequestPrivate {

public:
    GetEntitlementsRequestPrivate(const MarketplaceEntitlementRequest::Action action,
                                   GetEntitlementsRequest * const q);
    GetEntitlementsRequestPrivate(const GetEntitlementsRequestPrivate &other,
                                   GetEntitlementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEntitlementsRequest)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
