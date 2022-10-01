// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHRESETALARMREQUEST_P_H
#define QTAWS_BATCHRESETALARMREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "batchresetalarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchResetAlarmRequest;

class BatchResetAlarmRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    BatchResetAlarmRequestPrivate(const IoTEventsDataRequest::Action action,
                                   BatchResetAlarmRequest * const q);
    BatchResetAlarmRequestPrivate(const BatchResetAlarmRequestPrivate &other,
                                   BatchResetAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchResetAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
