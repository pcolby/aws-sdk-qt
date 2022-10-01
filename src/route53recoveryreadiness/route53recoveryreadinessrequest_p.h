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

#ifndef QTAWS_ROUTE53RECOVERYREADINESSREQUEST_P_H
#define QTAWS_ROUTE53RECOVERYREADINESSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "route53recoveryreadinessrequest.h"

namespace QtAws {
namespace Route53RecoveryReadiness {

class Route53RecoveryReadinessRequest;

class Route53RecoveryReadinessRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Route53RecoveryReadinessRequest::Action action; ///< Route53RecoveryReadiness action to be performed.
    QString apiVersion;        ///< Route53RecoveryReadiness API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53RecoveryReadiness request (query string) parameters. @todo?

    Route53RecoveryReadinessRequestPrivate(const Route53RecoveryReadinessRequest::Action action, Route53RecoveryReadinessRequest * const q);
    Route53RecoveryReadinessRequestPrivate(const Route53RecoveryReadinessRequestPrivate &other, Route53RecoveryReadinessRequest * const q);

    static QString toString(const Route53RecoveryReadinessRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryReadinessRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
