// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELINSTANCEREFRESHREQUEST_P_H
#define QTAWS_CANCELINSTANCEREFRESHREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "cancelinstancerefreshrequest.h"

namespace QtAws {
namespace AutoScaling {

class CancelInstanceRefreshRequest;

class CancelInstanceRefreshRequestPrivate : public AutoScalingRequestPrivate {

public:
    CancelInstanceRefreshRequestPrivate(const AutoScalingRequest::Action action,
                                   CancelInstanceRefreshRequest * const q);
    CancelInstanceRefreshRequestPrivate(const CancelInstanceRefreshRequestPrivate &other,
                                   CancelInstanceRefreshRequest * const q);

private:
    Q_DECLARE_PUBLIC(CancelInstanceRefreshRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
