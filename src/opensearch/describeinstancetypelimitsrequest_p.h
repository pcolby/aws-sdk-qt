// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCETYPELIMITSREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCETYPELIMITSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describeinstancetypelimitsrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeInstanceTypeLimitsRequest;

class DescribeInstanceTypeLimitsRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribeInstanceTypeLimitsRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribeInstanceTypeLimitsRequest * const q);
    DescribeInstanceTypeLimitsRequestPrivate(const DescribeInstanceTypeLimitsRequestPrivate &other,
                                   DescribeInstanceTypeLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceTypeLimitsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
