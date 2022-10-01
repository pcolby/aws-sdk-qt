// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERTLSPOLICIESRESPONSE_P_H
#define QTAWS_GETLOADBALANCERTLSPOLICIESRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerTlsPoliciesResponse;

class GetLoadBalancerTlsPoliciesResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetLoadBalancerTlsPoliciesResponsePrivate(GetLoadBalancerTlsPoliciesResponse * const q);

    void parseGetLoadBalancerTlsPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoadBalancerTlsPoliciesResponse)
    Q_DISABLE_COPY(GetLoadBalancerTlsPoliciesResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
