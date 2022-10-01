// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGESREQUEST_P_H
#define QTAWS_DESCRIBEPACKAGESREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describepackagesrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribePackagesRequest;

class DescribePackagesRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribePackagesRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribePackagesRequest * const q);
    DescribePackagesRequestPrivate(const DescribePackagesRequestPrivate &other,
                                   DescribePackagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePackagesRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
