// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAUTOSCALINGGROUPREQUEST_H
#define QTAWS_CREATEAUTOSCALINGGROUPREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class CreateAutoScalingGroupRequestPrivate;

class QTAWSAUTOSCALING_EXPORT CreateAutoScalingGroupRequest : public AutoScalingRequest {

public:
    CreateAutoScalingGroupRequest(const CreateAutoScalingGroupRequest &other);
    CreateAutoScalingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateAutoScalingGroupRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
