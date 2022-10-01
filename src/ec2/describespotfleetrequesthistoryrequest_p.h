// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPOTFLEETREQUESTHISTORYREQUEST_P_H
#define QTAWS_DESCRIBESPOTFLEETREQUESTHISTORYREQUEST_P_H

#include "ec2request_p.h"
#include "describespotfleetrequesthistoryrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeSpotFleetRequestHistoryRequest;

class DescribeSpotFleetRequestHistoryRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeSpotFleetRequestHistoryRequestPrivate(const Ec2Request::Action action,
                                   DescribeSpotFleetRequestHistoryRequest * const q);
    DescribeSpotFleetRequestHistoryRequestPrivate(const DescribeSpotFleetRequestHistoryRequestPrivate &other,
                                   DescribeSpotFleetRequestHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpotFleetRequestHistoryRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
