// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMREQUEST_P_H
#define QTAWS_DESCRIBEALARMREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "describealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class DescribeAlarmRequest;

class DescribeAlarmRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    DescribeAlarmRequestPrivate(const IoTEventsDataRequest::Action action,
                                   DescribeAlarmRequest * const q);
    DescribeAlarmRequestPrivate(const DescribeAlarmRequestPrivate &other,
                                   DescribeAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
