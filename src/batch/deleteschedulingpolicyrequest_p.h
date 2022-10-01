// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESCHEDULINGPOLICYREQUEST_P_H
#define QTAWS_DELETESCHEDULINGPOLICYREQUEST_P_H

#include "batchrequest_p.h"
#include "deleteschedulingpolicyrequest.h"

namespace QtAws {
namespace Batch {

class DeleteSchedulingPolicyRequest;

class DeleteSchedulingPolicyRequestPrivate : public BatchRequestPrivate {

public:
    DeleteSchedulingPolicyRequestPrivate(const BatchRequest::Action action,
                                   DeleteSchedulingPolicyRequest * const q);
    DeleteSchedulingPolicyRequestPrivate(const DeleteSchedulingPolicyRequestPrivate &other,
                                   DeleteSchedulingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSchedulingPolicyRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
