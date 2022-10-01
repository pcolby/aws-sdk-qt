// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTSCHEDULEDUPDATEGROUPACTIONREQUEST_P_H
#define QTAWS_BATCHPUTSCHEDULEDUPDATEGROUPACTIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "batchputscheduledupdategroupactionrequest.h"

namespace QtAws {
namespace AutoScaling {

class BatchPutScheduledUpdateGroupActionRequest;

class BatchPutScheduledUpdateGroupActionRequestPrivate : public AutoScalingRequestPrivate {

public:
    BatchPutScheduledUpdateGroupActionRequestPrivate(const AutoScalingRequest::Action action,
                                   BatchPutScheduledUpdateGroupActionRequest * const q);
    BatchPutScheduledUpdateGroupActionRequestPrivate(const BatchPutScheduledUpdateGroupActionRequestPrivate &other,
                                   BatchPutScheduledUpdateGroupActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchPutScheduledUpdateGroupActionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
