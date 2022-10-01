// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECUSTOMMETRICREQUEST_P_H
#define QTAWS_DESCRIBECUSTOMMETRICREQUEST_P_H

#include "iotrequest_p.h"
#include "describecustommetricrequest.h"

namespace QtAws {
namespace IoT {

class DescribeCustomMetricRequest;

class DescribeCustomMetricRequestPrivate : public IoTRequestPrivate {

public:
    DescribeCustomMetricRequestPrivate(const IoTRequest::Action action,
                                   DescribeCustomMetricRequest * const q);
    DescribeCustomMetricRequestPrivate(const DescribeCustomMetricRequestPrivate &other,
                                   DescribeCustomMetricRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCustomMetricRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
