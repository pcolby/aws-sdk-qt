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

#ifndef QTAWS_MARKETPLACEMETERINGCLIENTREQUEST_P_H
#define QTAWS_MARKETPLACEMETERINGCLIENTREQUEST_P_H

#include "marketplacemetering_p.h"
#include "marketplacemeteringclientrequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class MarketplaceMeteringClientRequest;

class QTAWS_EXPORT MarketplaceMeteringClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    MarketplaceMeteringClientRequest::Action action; ///< MarketplaceMetering action to be performed.
    QString apiVersion;        ///< MarketplaceMetering API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MarketplaceMetering request (query string) parameters. @todo?

    MarketplaceMeteringClientRequestPrivate(const MarketplaceMeteringClientRequest::Action action, MarketplaceMeteringClientRequest * const q);
    MarketplaceMeteringClientRequestPrivate(const MarketplaceMeteringClientRequestPrivate &other, MarketplaceMeteringClientRequest * const q);

    static QString toString(const MarketplaceMeteringClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MarketplaceMeteringClientRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
