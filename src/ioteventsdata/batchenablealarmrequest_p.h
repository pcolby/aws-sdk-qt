// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHENABLEALARMREQUEST_P_H
#define QTAWS_BATCHENABLEALARMREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "batchenablealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchEnableAlarmRequest;

class BatchEnableAlarmRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    BatchEnableAlarmRequestPrivate(const IoTEventsDataRequest::Action action,
                                   BatchEnableAlarmRequest * const q);
    BatchEnableAlarmRequestPrivate(const BatchEnableAlarmRequestPrivate &other,
                                   BatchEnableAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchEnableAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
