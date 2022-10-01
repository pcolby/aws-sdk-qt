// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCALINGPLANREQUEST_P_H
#define QTAWS_CREATESCALINGPLANREQUEST_P_H

#include "autoscalingplansrequest_p.h"
#include "createscalingplanrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class CreateScalingPlanRequest;

class CreateScalingPlanRequestPrivate : public AutoScalingPlansRequestPrivate {

public:
    CreateScalingPlanRequestPrivate(const AutoScalingPlansRequest::Action action,
                                   CreateScalingPlanRequest * const q);
    CreateScalingPlanRequestPrivate(const CreateScalingPlanRequestPrivate &other,
                                   CreateScalingPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateScalingPlanRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
