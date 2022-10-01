// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONREQUEST_P_H

#include "iotfleethubrequest_p.h"
#include "describeapplicationrequest.h"

namespace QtAws {
namespace IoTFleetHub {

class DescribeApplicationRequest;

class DescribeApplicationRequestPrivate : public IoTFleetHubRequestPrivate {

public:
    DescribeApplicationRequestPrivate(const IoTFleetHubRequest::Action action,
                                   DescribeApplicationRequest * const q);
    DescribeApplicationRequestPrivate(const DescribeApplicationRequestPrivate &other,
                                   DescribeApplicationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationRequest)

};

} // namespace IoTFleetHub
} // namespace QtAws

#endif
