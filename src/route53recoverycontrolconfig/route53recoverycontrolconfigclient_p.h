// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYCONTROLCONFIGCLIENT_P_H
#define QTAWS_ROUTE53RECOVERYCONTROLCONFIGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace Route53RecoveryControlConfig {

class Route53RecoveryControlConfigClient;

class Route53RecoveryControlConfigClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit Route53RecoveryControlConfigClientPrivate(Route53RecoveryControlConfigClient * const q);

private:
    Q_DECLARE_PUBLIC(Route53RecoveryControlConfigClient)
    Q_DISABLE_COPY(Route53RecoveryControlConfigClientPrivate)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
