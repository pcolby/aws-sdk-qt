// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERRESPONSE_P_H
#define QTAWS_CREATELOADBALANCERRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLoadBalancerResponse;

class CreateLoadBalancerResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit CreateLoadBalancerResponsePrivate(CreateLoadBalancerResponse * const q);

    void parseCreateLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLoadBalancerResponse)
    Q_DISABLE_COPY(CreateLoadBalancerResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
