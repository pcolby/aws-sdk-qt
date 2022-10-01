// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTOSUBNETSRESPONSE_P_H
#define QTAWS_ATTACHLOADBALANCERTOSUBNETSRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class AttachLoadBalancerToSubnetsResponse;

class AttachLoadBalancerToSubnetsResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit AttachLoadBalancerToSubnetsResponsePrivate(AttachLoadBalancerToSubnetsResponse * const q);

    void parseAttachLoadBalancerToSubnetsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachLoadBalancerToSubnetsResponse)
    Q_DISABLE_COPY(AttachLoadBalancerToSubnetsResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
