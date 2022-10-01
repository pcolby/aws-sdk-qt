// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTASSIGNMENTCREATIONSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTASSIGNMENTCREATIONSTATUSREQUEST_P_H

#include "ssoadminrequest_p.h"
#include "describeaccountassignmentcreationstatusrequest.h"

namespace QtAws {
namespace SsoAdmin {

class DescribeAccountAssignmentCreationStatusRequest;

class DescribeAccountAssignmentCreationStatusRequestPrivate : public SsoAdminRequestPrivate {

public:
    DescribeAccountAssignmentCreationStatusRequestPrivate(const SsoAdminRequest::Action action,
                                   DescribeAccountAssignmentCreationStatusRequest * const q);
    DescribeAccountAssignmentCreationStatusRequestPrivate(const DescribeAccountAssignmentCreationStatusRequestPrivate &other,
                                   DescribeAccountAssignmentCreationStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountAssignmentCreationStatusRequest)

};

} // namespace SsoAdmin
} // namespace QtAws

#endif
