// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSCALINGGROUPRESPONSE_P_H
#define QTAWS_DELETEAUTOSCALINGGROUPRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DeleteAutoScalingGroupResponse;

class DeleteAutoScalingGroupResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DeleteAutoScalingGroupResponsePrivate(DeleteAutoScalingGroupResponse * const q);

    void parseDeleteAutoScalingGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAutoScalingGroupResponse)
    Q_DISABLE_COPY(DeleteAutoScalingGroupResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
