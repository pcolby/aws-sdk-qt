// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTPRICEHISTORYREQUEST_P_H
#define QTAWS_DESCRIBESPOTPRICEHISTORYREQUEST_P_H

#include "ec2request_p.h"
#include "describespotpricehistoryrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotPriceHistoryRequest;

class DescribeSpotPriceHistoryRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSpotPriceHistoryRequestPrivate(const Ec2Request::Action action,
                                   DescribeSpotPriceHistoryRequest * const q);
    DescribeSpotPriceHistoryRequestPrivate(const DescribeSpotPriceHistoryRequestPrivate &other,
                                   DescribeSpotPriceHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpotPriceHistoryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
