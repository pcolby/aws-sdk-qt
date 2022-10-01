// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSCALINGPLANRESOURCEFORECASTDATAREQUEST_H
#define QTAWS_GETSCALINGPLANRESOURCEFORECASTDATAREQUEST_H

#include "autoscalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class GetScalingPlanResourceForecastDataRequestPrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT GetScalingPlanResourceForecastDataRequest : public AutoScalingPlansRequest {

public:
    GetScalingPlanResourceForecastDataRequest(const GetScalingPlanResourceForecastDataRequest &other);
    GetScalingPlanResourceForecastDataRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetScalingPlanResourceForecastDataRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
