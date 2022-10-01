// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDACTIONREQUEST_H
#define QTAWS_DELETESCHEDULEDACTIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteScheduledActionRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DeleteScheduledActionRequest : public AutoScalingRequest {

public:
    DeleteScheduledActionRequest(const DeleteScheduledActionRequest &other);
    DeleteScheduledActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteScheduledActionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
