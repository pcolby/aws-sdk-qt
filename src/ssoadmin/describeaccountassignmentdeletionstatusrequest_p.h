// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTASSIGNMENTDELETIONSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTASSIGNMENTDELETIONSTATUSREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "describeaccountassignmentdeletionstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeAccountAssignmentDeletionStatusRequest;

class DescribeAccountAssignmentDeletionStatusRequestPrivate : public SsoAdminRequestPrivate {

public:
    DescribeAccountAssignmentDeletionStatusRequestPrivate(const SsoAdminRequest::Action action,
                                   DescribeAccountAssignmentDeletionStatusRequest * const q);
    DescribeAccountAssignmentDeletionStatusRequestPrivate(const DescribeAccountAssignmentDeletionStatusRequestPrivate &other,
                                   DescribeAccountAssignmentDeletionStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAssignmentDeletionStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
