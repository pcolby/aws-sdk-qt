// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULEDACTIONREQUEST_P_H
#define QTAWS_DELETESCHEDULEDACTIONREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "deletescheduledactionrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteScheduledActionRequest;

class DeleteScheduledActionRequestPrivate : public AutoScalingRequestPrivate {

public:
    DeleteScheduledActionRequestPrivate(const AutoScalingRequest::Action action,
                                   DeleteScheduledActionRequest * const q);
    DeleteScheduledActionRequestPrivate(const DeleteScheduledActionRequestPrivate &other,
                                   DeleteScheduledActionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteScheduledActionRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
