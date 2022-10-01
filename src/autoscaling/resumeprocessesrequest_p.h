// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESUMEPROCESSESREQUEST_P_H
#define QTAWS_RESUMEPROCESSESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "resumeprocessesrequest.h"

namespace QtAws {
namespace AutoScaling {

class ResumeProcessesRequest;

class ResumeProcessesRequestPrivate : public AutoScalingRequestPrivate {

public:
    ResumeProcessesRequestPrivate(const AutoScalingRequest::Action action,
                                   ResumeProcessesRequest * const q);
    ResumeProcessesRequestPrivate(const ResumeProcessesRequestPrivate &other,
                                   ResumeProcessesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResumeProcessesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
