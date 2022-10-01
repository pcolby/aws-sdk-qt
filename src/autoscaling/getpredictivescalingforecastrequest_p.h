// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREDICTIVESCALINGFORECASTREQUEST_P_H
#define QTAWS_GETPREDICTIVESCALINGFORECASTREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "getpredictivescalingforecastrequest.h"

namespace QtAws {
namespace AutoScaling {

class GetPredictiveScalingForecastRequest;

class GetPredictiveScalingForecastRequestPrivate : public AutoScalingRequestPrivate {

public:
    GetPredictiveScalingForecastRequestPrivate(const AutoScalingRequest::Action action,
                                   GetPredictiveScalingForecastRequest * const q);
    GetPredictiveScalingForecastRequestPrivate(const GetPredictiveScalingForecastRequestPrivate &other,
                                   GetPredictiveScalingForecastRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetPredictiveScalingForecastRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
