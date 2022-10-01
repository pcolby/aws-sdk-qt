// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEENTITLEMENTCLIENT_P_H
#define QTAWS_MARKETPLACEENTITLEMENTCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MarketplaceEntitlement {

class MarketplaceEntitlementClient;

class MarketplaceEntitlementClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MarketplaceEntitlementClientPrivate(MarketplaceEntitlementClient * const q);

private:
    Q_DECLARE_PUBLIC(MarketplaceEntitlementClient)
    Q_DISABLE_COPY(MarketplaceEntitlementClientPrivate)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
