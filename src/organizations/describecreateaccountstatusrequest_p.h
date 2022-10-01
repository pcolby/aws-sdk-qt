// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECREATEACCOUNTSTATUSREQUEST_P_H
#define QTAWS_DESCRIBECREATEACCOUNTSTATUSREQUEST_P_H

#include "organizationsrequest_p.h"
#include "describecreateaccountstatusrequest.h"

namespace QtAws {
namespace Organizations {

class DescribeCreateAccountStatusRequest;

class DescribeCreateAccountStatusRequestPrivate : public OrganizationsRequestPrivate {

public:
    DescribeCreateAccountStatusRequestPrivate(const OrganizationsRequest::Action action,
                                   DescribeCreateAccountStatusRequest * const q);
    DescribeCreateAccountStatusRequestPrivate(const DescribeCreateAccountStatusRequestPrivate &other,
                                   DescribeCreateAccountStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCreateAccountStatusRequest)

};

} // namespace Organizations
} // namespace QtAws

#endif
