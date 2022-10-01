// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCESREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCESREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describereservedinstancesrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeReservedInstancesRequest;

class DescribeReservedInstancesRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribeReservedInstancesRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribeReservedInstancesRequest * const q);
    DescribeReservedInstancesRequestPrivate(const DescribeReservedInstancesRequestPrivate &other,
                                   DescribeReservedInstancesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstancesRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
