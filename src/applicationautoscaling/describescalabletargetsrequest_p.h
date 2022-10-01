// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCALABLETARGETSREQUEST_P_H
#define QTAWS_DESCRIBESCALABLETARGETSREQUEST_P_H

#include "applicationautoscalingrequest_p.h"
#include "describescalabletargetsrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DescribeScalableTargetsRequest;

class DescribeScalableTargetsRequestPrivate : public ApplicationAutoScalingRequestPrivate {

public:
    DescribeScalableTargetsRequestPrivate(const ApplicationAutoScalingRequest::Action action,
                                   DescribeScalableTargetsRequest * const q);
    DescribeScalableTargetsRequestPrivate(const DescribeScalableTargetsRequestPrivate &other,
                                   DescribeScalableTargetsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScalableTargetsRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
