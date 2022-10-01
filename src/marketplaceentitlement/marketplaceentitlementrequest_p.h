// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEENTITLEMENTREQUEST_P_H
#define QTAWS_MARKETPLACEENTITLEMENTREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "marketplaceentitlementrequest.h"

namespace QtAws {
namespace MarketplaceEntitlement {

class MarketplaceEntitlementRequest;

class MarketplaceEntitlementRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MarketplaceEntitlementRequest::Action action; ///< MarketplaceEntitlement action to be performed.
    QString apiVersion;        ///< MarketplaceEntitlement API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MarketplaceEntitlement request (query string) parameters. @todo?

    MarketplaceEntitlementRequestPrivate(const MarketplaceEntitlementRequest::Action action, MarketplaceEntitlementRequest * const q);
    MarketplaceEntitlementRequestPrivate(const MarketplaceEntitlementRequestPrivate &other, MarketplaceEntitlementRequest * const q);

    static QString toString(const MarketplaceEntitlementRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MarketplaceEntitlementRequest)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
