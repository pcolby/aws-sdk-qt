// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDOMAINSREQUEST_P_H
#define QTAWS_DESCRIBEDOMAINSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describedomainsrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeDomainsRequest;

class DescribeDomainsRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribeDomainsRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribeDomainsRequest * const q);
    DescribeDomainsRequestPrivate(const DescribeDomainsRequestPrivate &other,
                                   DescribeDomainsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDomainsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
