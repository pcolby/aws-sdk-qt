// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCALINGPLANRESOURCEFORECASTDATARESPONSE_H
#define QTAWS_GETSCALINGPLANRESOURCEFORECASTDATARESPONSE_H

#include "autoscalingplansresponse.h"
#include "getscalingplanresourceforecastdatarequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class GetScalingPlanResourceForecastDataResponsePrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT GetScalingPlanResourceForecastDataResponse : public AutoScalingPlansResponse {
    Q_OBJECT

public:
    GetScalingPlanResourceForecastDataResponse(const GetScalingPlanResourceForecastDataRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetScalingPlanResourceForecastDataRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetScalingPlanResourceForecastDataResponse)
    Q_DISABLE_COPY(GetScalingPlanResourceForecastDataResponse)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
