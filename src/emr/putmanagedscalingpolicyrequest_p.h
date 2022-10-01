// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDSCALINGPOLICYREQUEST_P_H
#define QTAWS_PUTMANAGEDSCALINGPOLICYREQUEST_P_H

#include "emrrequest_p.h"
#include "putmanagedscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class PutManagedScalingPolicyRequest;

class PutManagedScalingPolicyRequestPrivate : public EmrRequestPrivate {

public:
    PutManagedScalingPolicyRequestPrivate(const EmrRequest::Action action,
                                   PutManagedScalingPolicyRequest * const q);
    PutManagedScalingPolicyRequestPrivate(const PutManagedScalingPolicyRequestPrivate &other,
                                   PutManagedScalingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutManagedScalingPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
