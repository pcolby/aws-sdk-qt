// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCALINGPLANREQUEST_P_H
#define QTAWS_UPDATESCALINGPLANREQUEST_P_H

#include "autoscalingplansrequest_p.h"
#include "updatescalingplanrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class UpdateScalingPlanRequest;

class UpdateScalingPlanRequestPrivate : public AutoScalingPlansRequestPrivate {

public:
    UpdateScalingPlanRequestPrivate(const AutoScalingPlansRequest::Action action,
                                   UpdateScalingPlanRequest * const q);
    UpdateScalingPlanRequestPrivate(const UpdateScalingPlanRequestPrivate &other,
                                   UpdateScalingPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateScalingPlanRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
