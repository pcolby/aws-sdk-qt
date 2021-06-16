/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MARKETPLACEMETERINGREQUEST_P_H
#define QTAWS_MARKETPLACEMETERINGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "marketplacemeteringrequest.h"

namespace QtAws {
namespace MarketplaceMetering {

class MarketplaceMeteringRequest;

class QTAWS_EXPORT MarketplaceMeteringRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
