// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENTITLEMENTSRESPONSE_P_H
#define QTAWS_GETENTITLEMENTSRESPONSE_P_H

#include "marketplaceentitlementresponse_p.h"

namespace QtAws {
namespace MarketplaceEntitlement {

class GetEntitlementsResponse;

class GetEntitlementsResponsePrivate : public MarketplaceEntitlementResponsePrivate {

public:

    explicit GetEntitlementsResponsePrivate(GetEntitlementsResponse * const q);

    void parseGetEntitlementsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetEntitlementsResponse)
    Q_DISABLE_COPY(GetEntitlementsResponsePrivate)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
