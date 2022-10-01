// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPREDICTIVESCALINGFORECASTRESPONSE_P_H
#define QTAWS_GETPREDICTIVESCALINGFORECASTRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class GetPredictiveScalingForecastResponse;

class GetPredictiveScalingForecastResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit GetPredictiveScalingForecastResponsePrivate(GetPredictiveScalingForecastResponse * const q);

    void parseGetPredictiveScalingForecastResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetPredictiveScalingForecastResponse)
    Q_DISABLE_COPY(GetPredictiveScalingForecastResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
