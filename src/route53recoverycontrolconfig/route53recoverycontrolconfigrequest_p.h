// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
