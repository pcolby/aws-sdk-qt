// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_P_H
#define QTAWS_MODIFYLOADBALANCERATTRIBUTESRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class ModifyLoadBalancerAttributesResponse;

class ModifyLoadBalancerAttributesResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit ModifyLoadBalancerAttributesResponsePrivate(ModifyLoadBalancerAttributesResponse * const q);

    void parseModifyLoadBalancerAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyLoadBalancerAttributesResponse)
    Q_DISABLE_COPY(ModifyLoadBalancerAttributesResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
