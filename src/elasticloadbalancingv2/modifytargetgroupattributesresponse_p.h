// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTARGETGROUPATTRIBUTESRESPONSE_P_H
#define QTAWS_MODIFYTARGETGROUPATTRIBUTESRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyTargetGroupAttributesResponse;

class ModifyTargetGroupAttributesResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit ModifyTargetGroupAttributesResponsePrivate(ModifyTargetGroupAttributesResponse * const q);

    void parseModifyTargetGroupAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyTargetGroupAttributesResponse)
    Q_DISABLE_COPY(ModifyTargetGroupAttributesResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
