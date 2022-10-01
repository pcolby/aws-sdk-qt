// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGINGOPTIONSREQUEST_P_H
#define QTAWS_DESCRIBELOGGINGOPTIONSREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "describeloggingoptionsrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeLoggingOptionsRequest;

class DescribeLoggingOptionsRequestPrivate : public IoTEventsRequestPrivate {

public:
    DescribeLoggingOptionsRequestPrivate(const IoTEventsRequest::Action action,
                                   DescribeLoggingOptionsRequest * const q);
    DescribeLoggingOptionsRequestPrivate(const DescribeLoggingOptionsRequestPrivate &other,
                                   DescribeLoggingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLoggingOptionsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
