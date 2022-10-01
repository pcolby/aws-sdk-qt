// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINSREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINSREQUEST_P_H

#include "cloudsearchrequest_p.h"
#include "describedomainsrequest.h"

namespace QtAws {
namespace CloudSearch {

class DescribeDomainsRequest;

class DescribeDomainsRequestPrivate : public CloudSearchRequestPrivate {

public:
    DescribeDomainsRequestPrivate(const CloudSearchRequest::Action action,
                                   DescribeDomainsRequest * const q);
    DescribeDomainsRequestPrivate(const DescribeDomainsRequestPrivate &other,
                                   DescribeDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainsRequest)

};

} // namespace CloudSearch
} // namespace QtAws

#endif
