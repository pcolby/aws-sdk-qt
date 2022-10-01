// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCALINGPLANREQUEST_H
#define QTAWS_CREATESCALINGPLANREQUEST_H

#include "autoscalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class CreateScalingPlanRequestPrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT CreateScalingPlanRequest : public AutoScalingPlansRequest {

public:
    CreateScalingPlanRequest(const CreateScalingPlanRequest &other);
    CreateScalingPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateScalingPlanRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
