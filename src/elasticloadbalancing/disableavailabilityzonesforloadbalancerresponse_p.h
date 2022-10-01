// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_P_H
#define QTAWS_DISABLEAVAILABILITYZONESFORLOADBALANCERRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DisableAvailabilityZonesForLoadBalancerResponse;

class DisableAvailabilityZonesForLoadBalancerResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DisableAvailabilityZonesForLoadBalancerResponsePrivate(DisableAvailabilityZonesForLoadBalancerResponse * const q);

    void parseDisableAvailabilityZonesForLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableAvailabilityZonesForLoadBalancerResponse)
    Q_DISABLE_COPY(DisableAvailabilityZonesForLoadBalancerResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
