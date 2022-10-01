// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSCHEDULEDACTIONREQUEST_P_H
#define QTAWS_PUTSCHEDULEDACTIONREQUEST_P_H

#include "applicationautoscalingrequest_p.h"
#include "putscheduledactionrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class PutScheduledActionRequest;

class PutScheduledActionRequestPrivate : public ApplicationAutoScalingRequestPrivate {

public:
    PutScheduledActionRequestPrivate(const ApplicationAutoScalingRequest::Action action,
                                   PutScheduledActionRequest * const q);
    PutScheduledActionRequestPrivate(const PutScheduledActionRequestPrivate &other,
                                   PutScheduledActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutScheduledActionRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
