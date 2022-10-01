// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTOSCALINGGROUPRESPONSE_P_H
#define QTAWS_UPDATEAUTOSCALINGGROUPRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class UpdateAutoScalingGroupResponse;

class UpdateAutoScalingGroupResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit UpdateAutoScalingGroupResponsePrivate(UpdateAutoScalingGroupResponse * const q);

    void parseUpdateAutoScalingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateAutoScalingGroupResponse)
    Q_DISABLE_COPY(UpdateAutoScalingGroupResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
