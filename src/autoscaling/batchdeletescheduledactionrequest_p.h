// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETESCHEDULEDACTIONREQUEST_P_H
#define QTAWS_BATCHDELETESCHEDULEDACTIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "batchdeletescheduledactionrequest.h"

namespace QtAws {
namespace AutoScaling {

class BatchDeleteScheduledActionRequest;

class BatchDeleteScheduledActionRequestPrivate : public AutoScalingRequestPrivate {

public:
    BatchDeleteScheduledActionRequestPrivate(const AutoScalingRequest::Action action,
                                   BatchDeleteScheduledActionRequest * const q);
    BatchDeleteScheduledActionRequestPrivate(const BatchDeleteScheduledActionRequestPrivate &other,
                                   BatchDeleteScheduledActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteScheduledActionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
