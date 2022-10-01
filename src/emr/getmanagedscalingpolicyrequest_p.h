// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMANAGEDSCALINGPOLICYREQUEST_P_H
#define QTAWS_GETMANAGEDSCALINGPOLICYREQUEST_P_H

#include "emrrequest_p.h"
#include "getmanagedscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class GetManagedScalingPolicyRequest;

class GetManagedScalingPolicyRequestPrivate : public EmrRequestPrivate {

public:
    GetManagedScalingPolicyRequestPrivate(const EmrRequest::Action action,
                                   GetManagedScalingPolicyRequest * const q);
    GetManagedScalingPolicyRequestPrivate(const GetManagedScalingPolicyRequestPrivate &other,
                                   GetManagedScalingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetManagedScalingPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
