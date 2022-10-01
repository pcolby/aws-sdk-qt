// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
