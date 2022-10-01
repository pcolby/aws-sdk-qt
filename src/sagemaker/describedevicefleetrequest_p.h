// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEFLEETREQUEST_P_H
#define QTAWS_DESCRIBEDEVICEFLEETREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describedevicefleetrequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeDeviceFleetRequest;

class DescribeDeviceFleetRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeDeviceFleetRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeDeviceFleetRequest * const q);
    DescribeDeviceFleetRequestPrivate(const DescribeDeviceFleetRequestPrivate &other,
                                   DescribeDeviceFleetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeviceFleetRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
