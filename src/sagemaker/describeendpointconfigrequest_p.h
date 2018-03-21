/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DESCRIBEENDPOINTCONFIGREQUEST_P_H
#define QTAWS_DESCRIBEENDPOINTCONFIGREQUEST_P_H

#include "sagemaker_p.h"
#include "describeendpointconfigrequest.h"

namespace AWS {

namespace SageMaker {

class DescribeEndpointConfigRequest;

class QTAWS_EXPORT DescribeEndpointConfigRequestPrivate : public SageMakerPrivate {

public:
    DescribeEndpointConfigRequestPrivate(const SageMaker::Action action,
                                   DescribeEndpointConfigRequest * const q);
    DescribeEndpointConfigRequestPrivate(const DescribeEndpointConfigRequestPrivate &other,
                                   DescribeEndpointConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEndpointConfigRequest)

};

} // namespace SageMaker
} // namespace AWS

#endif
