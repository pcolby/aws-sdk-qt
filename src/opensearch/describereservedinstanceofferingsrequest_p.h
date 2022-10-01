// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDINSTANCEOFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDINSTANCEOFFERINGSREQUEST_P_H

#include "opensearchrequest_p.h"
#include "describereservedinstanceofferingsrequest.h"

namespace QtAws {
namespace OpenSearch {

class DescribeReservedInstanceOfferingsRequest;

class DescribeReservedInstanceOfferingsRequestPrivate : public OpenSearchRequestPrivate {

public:
    DescribeReservedInstanceOfferingsRequestPrivate(const OpenSearchRequest::Action action,
                                   DescribeReservedInstanceOfferingsRequest * const q);
    DescribeReservedInstanceOfferingsRequestPrivate(const DescribeReservedInstanceOfferingsRequestPrivate &other,
                                   DescribeReservedInstanceOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedInstanceOfferingsRequest)

};

} // namespace OpenSearch
} // namespace QtAws

#endif
