// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESERVEDNODEOFFERINGSREQUEST_P_H
#define QTAWS_DESCRIBERESERVEDNODEOFFERINGSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describereservednodeofferingsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeReservedNodeOfferingsRequest;

class DescribeReservedNodeOfferingsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeReservedNodeOfferingsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeReservedNodeOfferingsRequest * const q);
    DescribeReservedNodeOfferingsRequestPrivate(const DescribeReservedNodeOfferingsRequestPrivate &other,
                                   DescribeReservedNodeOfferingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReservedNodeOfferingsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
