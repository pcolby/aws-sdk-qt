// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCALINGPLANRESPONSE_H
#define QTAWS_CREATESCALINGPLANRESPONSE_H

#include "autoscalingplansresponse.h"
#include "createscalingplanrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class CreateScalingPlanResponsePrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT CreateScalingPlanResponse : public AutoScalingPlansResponse {
    Q_OBJECT

public:
    CreateScalingPlanResponse(const CreateScalingPlanRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateScalingPlanRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScalingPlanResponse)
    Q_DISABLE_COPY(CreateScalingPlanResponse)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
