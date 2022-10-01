// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EXECUTEPOLICYREQUEST_P_H
#define QTAWS_EXECUTEPOLICYREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "executepolicyrequest.h"

namespace QtAws {
namespace AutoScaling {

class ExecutePolicyRequest;

class ExecutePolicyRequestPrivate : public AutoScalingRequestPrivate {

public:
    ExecutePolicyRequestPrivate(const AutoScalingRequest::Action action,
                                   ExecutePolicyRequest * const q);
    ExecutePolicyRequestPrivate(const ExecutePolicyRequestPrivate &other,
                                   ExecutePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(ExecutePolicyRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
