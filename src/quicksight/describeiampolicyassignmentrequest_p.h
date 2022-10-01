// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIAMPOLICYASSIGNMENTREQUEST_P_H
#define QTAWS_DESCRIBEIAMPOLICYASSIGNMENTREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describeiampolicyassignmentrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeIAMPolicyAssignmentRequest;

class DescribeIAMPolicyAssignmentRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeIAMPolicyAssignmentRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeIAMPolicyAssignmentRequest * const q);
    DescribeIAMPolicyAssignmentRequestPrivate(const DescribeIAMPolicyAssignmentRequestPrivate &other,
                                   DescribeIAMPolicyAssignmentRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeIAMPolicyAssignmentRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
