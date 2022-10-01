// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCALINGPLANRESPONSE_H
#define QTAWS_UPDATESCALINGPLANRESPONSE_H

#include "autoscalingplansresponse.h"
#include "updatescalingplanrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class UpdateScalingPlanResponsePrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT UpdateScalingPlanResponse : public AutoScalingPlansResponse {
    Q_OBJECT

public:
    UpdateScalingPlanResponse(const UpdateScalingPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateScalingPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScalingPlanResponse)
    Q_DISABLE_COPY(UpdateScalingPlanResponse)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
