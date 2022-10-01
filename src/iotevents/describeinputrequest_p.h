// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINPUTREQUEST_P_H
#define QTAWS_DESCRIBEINPUTREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "describeinputrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeInputRequest;

class DescribeInputRequestPrivate : public IoTEventsRequestPrivate {

public:
    DescribeInputRequestPrivate(const IoTEventsRequest::Action action,
                                   DescribeInputRequest * const q);
    DescribeInputRequestPrivate(const DescribeInputRequestPrivate &other,
                                   DescribeInputRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInputRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
