// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCALINGPLANRESOURCEFORECASTDATAREQUEST_P_H
#define QTAWS_GETSCALINGPLANRESOURCEFORECASTDATAREQUEST_P_H

#include "autoscalingplansrequest_p.h"
#include "getscalingplanresourceforecastdatarequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class GetScalingPlanResourceForecastDataRequest;

class GetScalingPlanResourceForecastDataRequestPrivate : public AutoScalingPlansRequestPrivate {

public:
    GetScalingPlanResourceForecastDataRequestPrivate(const AutoScalingPlansRequest::Action action,
                                   GetScalingPlanResourceForecastDataRequest * const q);
    GetScalingPlanResourceForecastDataRequestPrivate(const GetScalingPlanResourceForecastDataRequestPrivate &other,
                                   GetScalingPlanResourceForecastDataRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetScalingPlanResourceForecastDataRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
