// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEINSTANCEINAUTOSCALINGGROUPRESPONSE_P_H
#define QTAWS_TERMINATEINSTANCEINAUTOSCALINGGROUPRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class TerminateInstanceInAutoScalingGroupResponse;

class TerminateInstanceInAutoScalingGroupResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit TerminateInstanceInAutoScalingGroupResponsePrivate(TerminateInstanceInAutoScalingGroupResponse * const q);

    void parseTerminateInstanceInAutoScalingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TerminateInstanceInAutoScalingGroupResponse)
    Q_DISABLE_COPY(TerminateInstanceInAutoScalingGroupResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
