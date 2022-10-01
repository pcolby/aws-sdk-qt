// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCALINGPLANRESPONSE_P_H
#define QTAWS_UPDATESCALINGPLANRESPONSE_P_H

#include "autoscalingplansresponse_p.h"

namespace QtAws {
namespace AutoScalingPlans {

class UpdateScalingPlanResponse;

class UpdateScalingPlanResponsePrivate : public AutoScalingPlansResponsePrivate {

public:

    explicit UpdateScalingPlanResponsePrivate(UpdateScalingPlanResponse * const q);

    void parseUpdateScalingPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateScalingPlanResponse)
    Q_DISABLE_COPY(UpdateScalingPlanResponsePrivate)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
