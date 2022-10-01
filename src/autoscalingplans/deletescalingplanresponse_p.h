// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCALINGPLANRESPONSE_P_H
#define QTAWS_DELETESCALINGPLANRESPONSE_P_H

#include "autoscalingplansresponse_p.h"

namespace QtAws {
namespace AutoScalingPlans {

class DeleteScalingPlanResponse;

class DeleteScalingPlanResponsePrivate : public AutoScalingPlansResponsePrivate {

public:

    explicit DeleteScalingPlanResponsePrivate(DeleteScalingPlanResponse * const q);

    void parseDeleteScalingPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteScalingPlanResponse)
    Q_DISABLE_COPY(DeleteScalingPlanResponsePrivate)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
