// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFLEETMETRICREQUEST_P_H
#define QTAWS_DESCRIBEFLEETMETRICREQUEST_P_H

#include "iotrequest_p.h"
#include "describefleetmetricrequest.h"

namespace QtAws {
namespace IoT {

class DescribeFleetMetricRequest;

class DescribeFleetMetricRequestPrivate : public IoTRequestPrivate {

public:
    DescribeFleetMetricRequestPrivate(const IoTRequest::Action action,
                                   DescribeFleetMetricRequest * const q);
    DescribeFleetMetricRequestPrivate(const DescribeFleetMetricRequestPrivate &other,
                                   DescribeFleetMetricRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFleetMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
