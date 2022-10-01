// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ELASTICLOADBALANCINGCLIENT_P_H
#define QTAWS_ELASTICLOADBALANCINGCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace ElasticLoadBalancing {

class ElasticLoadBalancingClient;

class ElasticLoadBalancingClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit ElasticLoadBalancingClientPrivate(ElasticLoadBalancingClient * const q);

private:
    Q_DECLARE_PUBLIC(ElasticLoadBalancingClient)
    Q_DISABLE_COPY(ElasticLoadBalancingClientPrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
