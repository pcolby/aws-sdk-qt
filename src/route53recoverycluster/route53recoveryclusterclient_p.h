// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYCLUSTERCLIENT_P_H
#define QTAWS_ROUTE53RECOVERYCLUSTERCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Route53RecoveryCluster {

class Route53RecoveryClusterClient;

class Route53RecoveryClusterClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Route53RecoveryClusterClientPrivate(Route53RecoveryClusterClient * const q);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryClusterClient)
    Q_DISABLE_COPY(Route53RecoveryClusterClientPrivate)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
