// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCALINGPLANREQUEST_H
#define QTAWS_UPDATESCALINGPLANREQUEST_H

#include "autoscalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class UpdateScalingPlanRequestPrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT UpdateScalingPlanRequest : public AutoScalingPlansRequest {

public:
    UpdateScalingPlanRequest(const UpdateScalingPlanRequest &other);
    UpdateScalingPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateScalingPlanRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
