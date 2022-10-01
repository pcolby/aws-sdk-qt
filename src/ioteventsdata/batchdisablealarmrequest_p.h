// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDISABLEALARMREQUEST_P_H
#define QTAWS_BATCHDISABLEALARMREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "batchdisablealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchDisableAlarmRequest;

class BatchDisableAlarmRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    BatchDisableAlarmRequestPrivate(const IoTEventsDataRequest::Action action,
                                   BatchDisableAlarmRequest * const q);
    BatchDisableAlarmRequestPrivate(const BatchDisableAlarmRequestPrivate &other,
                                   BatchDisableAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDisableAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
