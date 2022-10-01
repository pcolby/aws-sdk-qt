// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERFROMSUBNETSRESPONSE_P_H
#define QTAWS_DETACHLOADBALANCERFROMSUBNETSRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DetachLoadBalancerFromSubnetsResponse;

class DetachLoadBalancerFromSubnetsResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DetachLoadBalancerFromSubnetsResponsePrivate(DetachLoadBalancerFromSubnetsResponse * const q);

    void parseDetachLoadBalancerFromSubnetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachLoadBalancerFromSubnetsResponse)
    Q_DISABLE_COPY(DetachLoadBalancerFromSubnetsResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
