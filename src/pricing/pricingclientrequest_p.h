/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_PRICINGCLIENTREQUEST_P_H
#define QTAWS_PRICINGCLIENTREQUEST_P_H

#include "pricing_p.h"
#include "request.h"

namespace AWS {

namespace Pricing {

class PricingClientRequest;

class QTAWS_EXPORT PricingClientRequestPrivate : public AwsAbstractRequestPrivate {

public:
    PricingClientRequest::Action action; ///< Pricing action to be performed.
    QString apiVersion;        ///< Pricing API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Pricing request (query string) parameters. @todo?

    PricingClientRequestPrivate(const PricingClientRequest::Action action, PricingClientRequest * const q);
    PricingClientRequestPrivate(const RequestPrivate &other, PricingClientRequest * const q);

    static QString toString(const PricingClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(PricingClientRequest)

};

} // namespace Pricing
} // namespace AWS

#endif
