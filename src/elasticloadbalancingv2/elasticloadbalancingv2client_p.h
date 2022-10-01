// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGV2CLIENT_P_H
#define QTAWS_ELASTICLOADBALANCINGV2CLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ElasticLoadBalancingv2Client;

class ElasticLoadBalancingv2ClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ElasticLoadBalancingv2ClientPrivate(ElasticLoadBalancingv2Client * const q);

private:
    Q_DECLARE_PUBLIC(ElasticLoadBalancingv2Client)
    Q_DISABLE_COPY(ElasticLoadBalancingv2ClientPrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
