// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESERVICEACCESSPOLICIESREQUEST_P_H
#define QTAWS_DESCRIBESERVICEACCESSPOLICIESREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describeserviceaccesspoliciesrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeServiceAccessPoliciesRequest;

class DescribeServiceAccessPoliciesRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeServiceAccessPoliciesRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeServiceAccessPoliciesRequest * const q);
    DescribeServiceAccessPoliciesRequestPrivate(const DescribeServiceAccessPoliciesRequestPrivate &other,
                                   DescribeServiceAccessPoliciesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeServiceAccessPoliciesRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
