// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOSCALINGGROUPRESPONSE_P_H
#define QTAWS_CREATEAUTOSCALINGGROUPRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class CreateAutoScalingGroupResponse;

class CreateAutoScalingGroupResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit CreateAutoScalingGroupResponsePrivate(CreateAutoScalingGroupResponse * const q);

    void parseCreateAutoScalingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateAutoScalingGroupResponse)
    Q_DISABLE_COPY(CreateAutoScalingGroupResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
