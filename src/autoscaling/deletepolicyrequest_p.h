// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPOLICYREQUEST_P_H
#define QTAWS_DELETEPOLICYREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "deletepolicyrequest.h"

namespace QtAws {
namespace AutoScaling {

class DeletePolicyRequest;

class DeletePolicyRequestPrivate : public AutoScalingRequestPrivate {

public:
    DeletePolicyRequestPrivate(const AutoScalingRequest::Action action,
                                   DeletePolicyRequest * const q);
    DeletePolicyRequestPrivate(const DeletePolicyRequestPrivate &other,
                                   DeletePolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePolicyRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
