// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOADBALANCERSRESPONSE_P_H
#define QTAWS_GETLOADBALANCERSRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class GetLoadBalancersResponse;

class GetLoadBalancersResponsePrivate : public LightsailResponsePrivate {

public:

    explicit GetLoadBalancersResponsePrivate(GetLoadBalancersResponse * const q);

    void parseGetLoadBalancersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetLoadBalancersResponse)
    Q_DISABLE_COPY(GetLoadBalancersResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
