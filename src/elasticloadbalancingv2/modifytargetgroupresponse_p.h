// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYTARGETGROUPRESPONSE_P_H
#define QTAWS_MODIFYTARGETGROUPRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class ModifyTargetGroupResponse;

class ModifyTargetGroupResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit ModifyTargetGroupResponsePrivate(ModifyTargetGroupResponse * const q);

    void parseModifyTargetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyTargetGroupResponse)
    Q_DISABLE_COPY(ModifyTargetGroupResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
