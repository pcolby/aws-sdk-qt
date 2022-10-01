// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOLICIESREQUEST_P_H
#define QTAWS_DESCRIBEPOLICIESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describepoliciesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribePoliciesRequest;

class DescribePoliciesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribePoliciesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribePoliciesRequest * const q);
    DescribePoliciesRequestPrivate(const DescribePoliciesRequestPrivate &other,
                                   DescribePoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePoliciesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
