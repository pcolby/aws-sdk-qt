// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCALINGPLANRESPONSE_P_H
#define QTAWS_CREATESCALINGPLANRESPONSE_P_H

#include "autoscalingplansresponse_p.h"

namespace QtAws {
namespace AutoScalingPlans {

class CreateScalingPlanResponse;

class CreateScalingPlanResponsePrivate : public AutoScalingPlansResponsePrivate {

public:

    explicit CreateScalingPlanResponsePrivate(CreateScalingPlanResponse * const q);

    void parseCreateScalingPlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateScalingPlanResponse)
    Q_DISABLE_COPY(CreateScalingPlanResponsePrivate)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
