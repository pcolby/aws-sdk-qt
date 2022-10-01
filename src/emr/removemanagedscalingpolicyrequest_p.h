// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REMOVEMANAGEDSCALINGPOLICYREQUEST_P_H
#define QTAWS_REMOVEMANAGEDSCALINGPOLICYREQUEST_P_H

#include "emrrequest_p.h"
#include "removemanagedscalingpolicyrequest.h"

namespace QtAws {
namespace Emr {

class RemoveManagedScalingPolicyRequest;

class RemoveManagedScalingPolicyRequestPrivate : public EmrRequestPrivate {

public:
    RemoveManagedScalingPolicyRequestPrivate(const EmrRequest::Action action,
                                   RemoveManagedScalingPolicyRequest * const q);
    RemoveManagedScalingPolicyRequestPrivate(const RemoveManagedScalingPolicyRequestPrivate &other,
                                   RemoveManagedScalingPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(RemoveManagedScalingPolicyRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
