// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETESCHEDULEDACTIONREQUEST_H
#define QTAWS_BATCHDELETESCHEDULEDACTIONREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class BatchDeleteScheduledActionRequestPrivate;

class QTAWSAUTOSCALING_EXPORT BatchDeleteScheduledActionRequest : public AutoScalingRequest {

public:
    BatchDeleteScheduledActionRequest(const BatchDeleteScheduledActionRequest &other);
    BatchDeleteScheduledActionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteScheduledActionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
