// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCALINGPLANRESOURCEFORECASTDATARESPONSE_P_H
#define QTAWS_GETSCALINGPLANRESOURCEFORECASTDATARESPONSE_P_H

#include "autoscalingplansresponse_p.h"

namespace QtAws {
namespace AutoScalingPlans {

class GetScalingPlanResourceForecastDataResponse;

class GetScalingPlanResourceForecastDataResponsePrivate : public AutoScalingPlansResponsePrivate {

public:

    explicit GetScalingPlanResourceForecastDataResponsePrivate(GetScalingPlanResourceForecastDataResponse * const q);

    void parseGetScalingPlanResourceForecastDataResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetScalingPlanResourceForecastDataResponse)
    Q_DISABLE_COPY(GetScalingPlanResourceForecastDataResponsePrivate)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
