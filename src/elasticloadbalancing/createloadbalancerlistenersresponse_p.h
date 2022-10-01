// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERLISTENERSRESPONSE_P_H
#define QTAWS_CREATELOADBALANCERLISTENERSRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLoadBalancerListenersResponse;

class CreateLoadBalancerListenersResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit CreateLoadBalancerListenersResponsePrivate(CreateLoadBalancerListenersResponse * const q);

    void parseCreateLoadBalancerListenersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLoadBalancerListenersResponse)
    Q_DISABLE_COPY(CreateLoadBalancerListenersResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
