// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMMODELREQUEST_P_H
#define QTAWS_DESCRIBEALARMMODELREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "describealarmmodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class DescribeAlarmModelRequest;

class DescribeAlarmModelRequestPrivate : public IoTEventsRequestPrivate {

public:
    DescribeAlarmModelRequestPrivate(const IoTEventsRequest::Action action,
                                   DescribeAlarmModelRequest * const q);
    DescribeAlarmModelRequestPrivate(const DescribeAlarmModelRequestPrivate &other,
                                   DescribeAlarmModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
