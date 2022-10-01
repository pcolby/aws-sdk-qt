// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_P_H
#define QTAWS_ENABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class EnableAvailabilityZonesForLoadBalancerResponse;

class EnableAvailabilityZonesForLoadBalancerResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit EnableAvailabilityZonesForLoadBalancerResponsePrivate(EnableAvailabilityZonesForLoadBalancerResponse * const q);

    void parseEnableAvailabilityZonesForLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableAvailabilityZonesForLoadBalancerResponse)
    Q_DISABLE_COPY(EnableAvailabilityZonesForLoadBalancerResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
