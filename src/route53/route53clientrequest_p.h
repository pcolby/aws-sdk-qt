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

#ifndef QTAWS_ROUTE53CLIENTREQUEST_P_H
#define QTAWS_ROUTE53CLIENTREQUEST_P_H

#include "route53_p.h"
#include "route53clientrequest.h"

namespace QtAws {
namespace Route53 {

class Route53ClientRequest;

class QTAWS_EXPORT Route53ClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Route53ClientRequest::Action action; ///< Route53 action to be performed.
    QString apiVersion;        ///< Route53 API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53 request (query string) parameters. @todo?

    Route53ClientRequestPrivate(const Route53ClientRequest::Action action, Route53ClientRequest * const q);
    Route53ClientRequestPrivate(const Route53ClientRequestPrivate &other, Route53ClientRequest * const q);

    static QString toString(const Route53ClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Route53ClientRequest)

};

} // namespace Route53
} // namespace QtAws

#endif
