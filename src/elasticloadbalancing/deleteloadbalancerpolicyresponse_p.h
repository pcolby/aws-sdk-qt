// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERPOLICYRESPONSE_P_H
#define QTAWS_DELETELOADBALANCERPOLICYRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DeleteLoadBalancerPolicyResponse;

class DeleteLoadBalancerPolicyResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DeleteLoadBalancerPolicyResponsePrivate(DeleteLoadBalancerPolicyResponse * const q);

    void parseDeleteLoadBalancerPolicyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerPolicyResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerPolicyResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
