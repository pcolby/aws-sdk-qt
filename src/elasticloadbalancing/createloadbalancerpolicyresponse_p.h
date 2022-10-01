// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOADBALANCERPOLICYRESPONSE_P_H
#define QTAWS_CREATELOADBALANCERPOLICYRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class CreateLoadBalancerPolicyResponse;

class CreateLoadBalancerPolicyResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit CreateLoadBalancerPolicyResponsePrivate(CreateLoadBalancerPolicyResponse * const q);

    void parseCreateLoadBalancerPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLoadBalancerPolicyResponse)
    Q_DISABLE_COPY(CreateLoadBalancerPolicyResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
