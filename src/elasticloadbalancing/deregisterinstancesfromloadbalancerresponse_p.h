// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERINSTANCESFROMLOADBALANCERRESPONSE_P_H
#define QTAWS_DEREGISTERINSTANCESFROMLOADBALANCERRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeregisterInstancesFromLoadBalancerResponse;

class DeregisterInstancesFromLoadBalancerResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DeregisterInstancesFromLoadBalancerResponsePrivate(DeregisterInstancesFromLoadBalancerResponse * const q);

    void parseDeregisterInstancesFromLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeregisterInstancesFromLoadBalancerResponse)
    Q_DISABLE_COPY(DeregisterInstancesFromLoadBalancerResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
