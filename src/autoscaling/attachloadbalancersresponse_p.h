// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERSRESPONSE_P_H
#define QTAWS_ATTACHLOADBALANCERSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class AttachLoadBalancersResponse;

class AttachLoadBalancersResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit AttachLoadBalancersResponsePrivate(AttachLoadBalancersResponse * const q);

    void parseAttachLoadBalancersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachLoadBalancersResponse)
    Q_DISABLE_COPY(AttachLoadBalancersResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
