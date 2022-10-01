// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTREQUEST_P_H

#include "organizationsrequest_p.h"
#include "describeaccountrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeAccountRequest;

class DescribeAccountRequestPrivate : public OrganizationsRequestPrivate {

public:
    DescribeAccountRequestPrivate(const OrganizationsRequest::Action action,
                                   DescribeAccountRequest * const q);
    DescribeAccountRequestPrivate(const DescribeAccountRequestPrivate &other,
                                   DescribeAccountRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
