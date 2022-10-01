// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHSNOOZEALARMREQUEST_P_H
#define QTAWS_BATCHSNOOZEALARMREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "batchsnoozealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchSnoozeAlarmRequest;

class BatchSnoozeAlarmRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    BatchSnoozeAlarmRequestPrivate(const IoTEventsDataRequest::Action action,
                                   BatchSnoozeAlarmRequest * const q);
    BatchSnoozeAlarmRequestPrivate(const BatchSnoozeAlarmRequestPrivate &other,
                                   BatchSnoozeAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchSnoozeAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
