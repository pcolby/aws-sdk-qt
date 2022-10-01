// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSCALINGGROUPREQUEST_H
#define QTAWS_DELETEAUTOSCALINGGROUPREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteAutoScalingGroupRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DeleteAutoScalingGroupRequest : public AutoScalingRequest {

public:
    DeleteAutoScalingGroupRequest(const DeleteAutoScalingGroupRequest &other);
    DeleteAutoScalingGroupRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteAutoScalingGroupRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
