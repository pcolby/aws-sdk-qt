// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTREQUEST_P_H

#include "workspacesrequest_p.h"
#include "describeaccountrequest.h"

namespace QtAws {
namespace WorkSpaces {

class DescribeAccountRequest;

class DescribeAccountRequestPrivate : public WorkSpacesRequestPrivate {

public:
    DescribeAccountRequestPrivate(const WorkSpacesRequest::Action action,
                                   DescribeAccountRequest * const q);
    DescribeAccountRequestPrivate(const DescribeAccountRequestPrivate &other,
                                   DescribeAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountRequest)

};

} // namespace WorkSpaces
} // namespace QtAws

#endif
