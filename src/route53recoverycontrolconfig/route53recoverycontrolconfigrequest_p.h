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

#ifndef QTAWS_ROUTE53RECOVERYCONTROLCONFIGREQUEST_P_H
#define QTAWS_ROUTE53RECOVERYCONTROLCONFIGREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "route53recoverycontrolconfigrequest.h"

namespace QtAws {
namespace Route53RecoveryControlConfig {

class Route53RecoveryControlConfigRequest;

class Route53RecoveryControlConfigRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Route53RecoveryControlConfigRequest::Action action; ///< Route53RecoveryControlConfig action to be performed.
    QString apiVersion;        ///< Route53RecoveryControlConfig API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53RecoveryControlConfig request (query string) parameters. @todo?

    Route53RecoveryControlConfigRequestPrivate(const Route53RecoveryControlConfigRequest::Action action, Route53RecoveryControlConfigRequest * const q);
    Route53RecoveryControlConfigRequestPrivate(const Route53RecoveryControlConfigRequestPrivate &other, Route53RecoveryControlConfigRequest * const q);

    static QString toString(const Route53RecoveryControlConfigRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryControlConfigRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
