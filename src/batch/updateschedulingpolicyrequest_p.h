// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESCHEDULINGPOLICYREQUEST_P_H
#define QTAWS_UPDATESCHEDULINGPOLICYREQUEST_P_H

#include "batchrequest_p.h"
#include "updateschedulingpolicyrequest.h"

namespace QtAws {
namespace Batch {

class UpdateSchedulingPolicyRequest;

class UpdateSchedulingPolicyRequestPrivate : public BatchRequestPrivate {

public:
    UpdateSchedulingPolicyRequestPrivate(const BatchRequest::Action action,
                                   UpdateSchedulingPolicyRequest * const q);
    UpdateSchedulingPolicyRequestPrivate(const UpdateSchedulingPolicyRequestPrivate &other,
                                   UpdateSchedulingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSchedulingPolicyRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
