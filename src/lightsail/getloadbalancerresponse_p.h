// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERRESPONSE_P_H
#define QTAWS_GETLOADBALANCERRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancerResponse;

class GetLoadBalancerResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetLoadBalancerResponsePrivate(GetLoadBalancerResponse * const q);

    void parseGetLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoadBalancerResponse)
    Q_DISABLE_COPY(GetLoadBalancerResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
