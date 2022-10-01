// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDEVICEREQUEST_P_H
#define QTAWS_DESCRIBEDEVICEREQUEST_P_H

#include "sagemakerrequest_p.h"
#include "describedevicerequest.h"

namespace QtAws {
namespace SageMaker {

class DescribeDeviceRequest;

class DescribeDeviceRequestPrivate : public SageMakerRequestPrivate {

public:
    DescribeDeviceRequestPrivate(const SageMakerRequest::Action action,
                                   DescribeDeviceRequest * const q);
    DescribeDeviceRequestPrivate(const DescribeDeviceRequestPrivate &other,
                                   DescribeDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeviceRequest)

};

} // namespace SageMaker
} // namespace QtAws

#endif
