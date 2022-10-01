// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEDULEDUPDATEGROUPACTIONREQUEST_P_H
#define QTAWS_PUTSCHEDULEDUPDATEGROUPACTIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "putscheduledupdategroupactionrequest.h"

namespace QtAws {
namespace AutoScaling {

class PutScheduledUpdateGroupActionRequest;

class PutScheduledUpdateGroupActionRequestPrivate : public AutoScalingRequestPrivate {

public:
    PutScheduledUpdateGroupActionRequestPrivate(const AutoScalingRequest::Action action,
                                   PutScheduledUpdateGroupActionRequest * const q);
    PutScheduledUpdateGroupActionRequestPrivate(const PutScheduledUpdateGroupActionRequestPrivate &other,
                                   PutScheduledUpdateGroupActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutScheduledUpdateGroupActionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
