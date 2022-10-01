// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEGROUPMEMBERSHIPREQUEST_P_H
#define QTAWS_DESCRIBEGROUPMEMBERSHIPREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describegroupmembershiprequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeGroupMembershipRequest;

class DescribeGroupMembershipRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeGroupMembershipRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeGroupMembershipRequest * const q);
    DescribeGroupMembershipRequestPrivate(const DescribeGroupMembershipRequestPrivate &other,
                                   DescribeGroupMembershipRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeGroupMembershipRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
