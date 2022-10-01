// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERINSTANCESWITHLOADBALANCERRESPONSE_P_H
#define QTAWS_REGISTERINSTANCESWITHLOADBALANCERRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class RegisterInstancesWithLoadBalancerResponse;

class RegisterInstancesWithLoadBalancerResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit RegisterInstancesWithLoadBalancerResponsePrivate(RegisterInstancesWithLoadBalancerResponse * const q);

    void parseRegisterInstancesWithLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RegisterInstancesWithLoadBalancerResponse)
    Q_DISABLE_COPY(RegisterInstancesWithLoadBalancerResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
