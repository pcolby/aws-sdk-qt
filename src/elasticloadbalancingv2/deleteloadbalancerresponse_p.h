// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOADBALANCERRESPONSE_P_H
#define QTAWS_DELETELOADBALANCERRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteLoadBalancerResponse;

class DeleteLoadBalancerResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DeleteLoadBalancerResponsePrivate(DeleteLoadBalancerResponse * const q);

    void parseDeleteLoadBalancerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLoadBalancerResponse)
    Q_DISABLE_COPY(DeleteLoadBalancerResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
