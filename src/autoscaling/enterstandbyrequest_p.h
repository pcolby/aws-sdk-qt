// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENTERSTANDBYREQUEST_P_H
#define QTAWS_ENTERSTANDBYREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "enterstandbyrequest.h"

namespace QtAws {
namespace AutoScaling {

class EnterStandbyRequest;

class EnterStandbyRequestPrivate : public AutoScalingRequestPrivate {

public:
    EnterStandbyRequestPrivate(const AutoScalingRequest::Action action,
                                   EnterStandbyRequest * const q);
    EnterStandbyRequestPrivate(const EnterStandbyRequestPrivate &other,
                                   EnterStandbyRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnterStandbyRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
