// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSREQUEST_P_H
#define QTAWS_DESCRIBEUSERSREQUEST_P_H

#include "workdocsrequest_p.h"
#include "describeusersrequest.h"

namespace QtAws {
namespace WorkDocs {

class DescribeUsersRequest;

class DescribeUsersRequestPrivate : public WorkDocsRequestPrivate {

public:
    DescribeUsersRequestPrivate(const WorkDocsRequest::Action action,
                                   DescribeUsersRequest * const q);
    DescribeUsersRequestPrivate(const DescribeUsersRequestPrivate &other,
                                   DescribeUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUsersRequest)

};

} // namespace WorkDocs
} // namespace QtAws

#endif
