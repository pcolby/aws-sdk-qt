// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERMETRICDATARESPONSE_P_H
#define QTAWS_GETLOADBALANCERMETRICDATARESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerMetricDataResponse;

class GetLoadBalancerMetricDataResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetLoadBalancerMetricDataResponsePrivate(GetLoadBalancerMetricDataResponse * const q);

    void parseGetLoadBalancerMetricDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoadBalancerMetricDataResponse)
    Q_DISABLE_COPY(GetLoadBalancerMetricDataResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
