// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCALINGPLANREQUEST_P_H
#define QTAWS_DELETESCALINGPLANREQUEST_P_H

#include "autoscalingplansrequest_p.h"
#include "deletescalingplanrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class DeleteScalingPlanRequest;

class DeleteScalingPlanRequestPrivate : public AutoScalingPlansRequestPrivate {

public:
    DeleteScalingPlanRequestPrivate(const AutoScalingPlansRequest::Action action,
                                   DeleteScalingPlanRequest * const q);
    DeleteScalingPlanRequestPrivate(const DeleteScalingPlanRequestPrivate &other,
                                   DeleteScalingPlanRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScalingPlanRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
