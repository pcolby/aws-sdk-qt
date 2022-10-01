// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERSRESPONSE_P_H
#define QTAWS_DETACHLOADBALANCERSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DetachLoadBalancersResponse;

class DetachLoadBalancersResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DetachLoadBalancersResponsePrivate(DetachLoadBalancersResponse * const q);

    void parseDetachLoadBalancersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachLoadBalancersResponse)
    Q_DISABLE_COPY(DetachLoadBalancersResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
