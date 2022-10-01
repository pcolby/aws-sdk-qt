// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTINSTANCEREFRESHREQUEST_P_H
#define QTAWS_STARTINSTANCEREFRESHREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "startinstancerefreshrequest.h"

namespace QtAws {
namespace AutoScaling {

class StartInstanceRefreshRequest;

class StartInstanceRefreshRequestPrivate : public AutoScalingRequestPrivate {

public:
    StartInstanceRefreshRequestPrivate(const AutoScalingRequest::Action action,
                                   StartInstanceRefreshRequest * const q);
    StartInstanceRefreshRequestPrivate(const StartInstanceRefreshRequestPrivate &other,
                                   StartInstanceRefreshRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartInstanceRefreshRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
