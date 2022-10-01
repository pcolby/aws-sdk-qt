// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCALINGPLANREQUEST_H
#define QTAWS_DELETESCALINGPLANREQUEST_H

#include "autoscalingplansrequest.h"

namespace QtAws {
namespace AutoScalingPlans {

class DeleteScalingPlanRequestPrivate;

class QTAWSAUTOSCALINGPLANS_EXPORT DeleteScalingPlanRequest : public AutoScalingPlansRequest {

public:
    DeleteScalingPlanRequest(const DeleteScalingPlanRequest &other);
    DeleteScalingPlanRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScalingPlanRequest)

};

} // namespace AutoScalingPlans
} // namespace QtAws

#endif
