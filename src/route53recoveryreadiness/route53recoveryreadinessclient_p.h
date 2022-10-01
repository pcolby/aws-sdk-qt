// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYREADINESSCLIENT_P_H
#define QTAWS_ROUTE53RECOVERYREADINESSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Route53RecoveryReadiness {

class Route53RecoveryReadinessClient;

class Route53RecoveryReadinessClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Route53RecoveryReadinessClientPrivate(Route53RecoveryReadinessClient * const q);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryReadinessClient)
    Q_DISABLE_COPY(Route53RecoveryReadinessClientPrivate)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
