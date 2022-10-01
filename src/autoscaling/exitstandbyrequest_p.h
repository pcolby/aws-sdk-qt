// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXITSTANDBYREQUEST_P_H
#define QTAWS_EXITSTANDBYREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "exitstandbyrequest.h"

namespace QtAws {
namespace AutoScaling {

class ExitStandbyRequest;

class ExitStandbyRequestPrivate : public AutoScalingRequestPrivate {

public:
    ExitStandbyRequestPrivate(const AutoScalingRequest::Action action,
                                   ExitStandbyRequest * const q);
    ExitStandbyRequestPrivate(const ExitStandbyRequestPrivate &other,
                                   ExitStandbyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExitStandbyRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
