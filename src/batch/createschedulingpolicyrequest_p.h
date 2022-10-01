// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESCHEDULINGPOLICYREQUEST_P_H
#define QTAWS_CREATESCHEDULINGPOLICYREQUEST_P_H

#include "batchrequest_p.h"
#include "createschedulingpolicyrequest.h"

namespace QtAws {
namespace Batch {

class CreateSchedulingPolicyRequest;

class CreateSchedulingPolicyRequestPrivate : public BatchRequestPrivate {

public:
    CreateSchedulingPolicyRequestPrivate(const BatchRequest::Action action,
                                   CreateSchedulingPolicyRequest * const q);
    CreateSchedulingPolicyRequestPrivate(const CreateSchedulingPolicyRequestPrivate &other,
                                   CreateSchedulingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSchedulingPolicyRequest)

};

} // namespace Batch
} // namespace QtAws

#endif
