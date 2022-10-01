// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYCLUSTERREQUEST_P_H
#define QTAWS_ROUTE53RECOVERYCLUSTERREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "route53recoveryclusterrequest.h"

namespace QtAws {
namespace Route53RecoveryCluster {

class Route53RecoveryClusterRequest;

class Route53RecoveryClusterRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    Route53RecoveryClusterRequest::Action action; ///< Route53RecoveryCluster action to be performed.
    QString apiVersion;        ///< Route53RecoveryCluster API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< Route53RecoveryCluster request (query string) parameters. @todo?

    Route53RecoveryClusterRequestPrivate(const Route53RecoveryClusterRequest::Action action, Route53RecoveryClusterRequest * const q);
    Route53RecoveryClusterRequestPrivate(const Route53RecoveryClusterRequestPrivate &other, Route53RecoveryClusterRequest * const q);

    static QString toString(const Route53RecoveryClusterRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryClusterRequest)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
