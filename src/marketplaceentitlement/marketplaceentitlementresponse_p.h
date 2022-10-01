// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEENTITLEMENTRESPONSE_P_H
#define QTAWS_MARKETPLACEENTITLEMENTRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MarketplaceEntitlement {

class MarketplaceEntitlementResponse;

class MarketplaceEntitlementResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MarketplaceEntitlementResponsePrivate(MarketplaceEntitlementResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MarketplaceEntitlementResponse)
    Q_DISABLE_COPY(MarketplaceEntitlementResponsePrivate)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
