// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHACKNOWLEDGEALARMREQUEST_P_H
#define QTAWS_BATCHACKNOWLEDGEALARMREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "batchacknowledgealarmrequest.h"

namespace QtAws {
namespace IoTEventsData {

class BatchAcknowledgeAlarmRequest;

class BatchAcknowledgeAlarmRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    BatchAcknowledgeAlarmRequestPrivate(const IoTEventsDataRequest::Action action,
                                   BatchAcknowledgeAlarmRequest * const q);
    BatchAcknowledgeAlarmRequestPrivate(const BatchAcknowledgeAlarmRequestPrivate &other,
                                   BatchAcknowledgeAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchAcknowledgeAlarmRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
