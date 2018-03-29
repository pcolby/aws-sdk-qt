/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBESPOTFLEETREQUESTSREQUEST_P_H
#define QTAWS_DESCRIBESPOTFLEETREQUESTSREQUEST_P_H

#include "ec2_p.h"
#include "describespotfleetrequestsrequest.h"

namespace QtAws {
namespace EC2 {

class DescribeSpotFleetRequestsRequest;

class QTAWS_EXPORT DescribeSpotFleetRequestsRequestPrivate : public EC2Private {

public:
    DescribeSpotFleetRequestsRequestPrivate(const EC2::Action action,
                                   DescribeSpotFleetRequestsRequest * const q);
    DescribeSpotFleetRequestsRequestPrivate(const DescribeSpotFleetRequestsRequestPrivate &other,
                                   DescribeSpotFleetRequestsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpotFleetRequestsRequest)

};

} // namespace EC2
} // namespace QtAws

#endif
