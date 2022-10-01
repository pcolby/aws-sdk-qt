// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETARGETGROUPRESPONSE_P_H
#define QTAWS_DELETETARGETGROUPRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DeleteTargetGroupResponse;

class DeleteTargetGroupResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DeleteTargetGroupResponsePrivate(DeleteTargetGroupResponse * const q);

    void parseDeleteTargetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteTargetGroupResponse)
    Q_DISABLE_COPY(DeleteTargetGroupResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
