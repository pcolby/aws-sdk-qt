// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEMETERINGREQUEST_P_H
#define QTAWS_MARKETPLACEMETERINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "marketplacemeteringrequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class MarketplaceMeteringRequest;

class MarketplaceMeteringRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MarketplaceMeteringRequest::Action action; ///< MarketplaceMetering action to be performed.
    QString apiVersion;        ///< MarketplaceMetering API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MarketplaceMetering request (query string) parameters. @todo?

    MarketplaceMeteringRequestPrivate(const MarketplaceMeteringRequest::Action action, MarketplaceMeteringRequest * const q);
    MarketplaceMeteringRequestPrivate(const MarketplaceMeteringRequestPrivate &other, MarketplaceMeteringRequest * const q);

    static QString toString(const MarketplaceMeteringRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MarketplaceMeteringRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
