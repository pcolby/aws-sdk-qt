/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MARKETPLACEENTITLEMENTSERVICECLIENTREQUEST_P_H
#define QTAWS_MARKETPLACEENTITLEMENTSERVICECLIENTREQUEST_P_H

#include "marketplaceentitlementservice_p.h"
#include "marketplaceentitlementserviceclientrequest.h"

namespace QtAws {
namespace MarketplaceEntitlementService {

class MarketplaceEntitlementServiceClientRequest;

class QTAWS_EXPORT MarketplaceEntitlementServiceClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    MarketplaceEntitlementServiceClientRequest::Action action; ///< MarketplaceEntitlementService action to be performed.
    QString apiVersion;        ///< MarketplaceEntitlementService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MarketplaceEntitlementService request (query string) parameters. @todo?

    MarketplaceEntitlementServiceClientRequestPrivate(const MarketplaceEntitlementServiceClientRequest::Action action, MarketplaceEntitlementServiceClientRequest * const q);
    MarketplaceEntitlementServiceClientRequestPrivate(const MarketplaceEntitlementServiceClientRequestPrivate &other, MarketplaceEntitlementServiceClientRequest * const q);

    static QString toString(const MarketplaceEntitlementServiceClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MarketplaceEntitlementServiceClientRequest)

};

} // namespace MarketplaceEntitlementService
} // namespace QtAws

#endif
