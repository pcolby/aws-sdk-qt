// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEALARMMODELREQUEST_P_H
#define QTAWS_DELETEALARMMODELREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "deletealarmmodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class DeleteAlarmModelRequest;

class DeleteAlarmModelRequestPrivate : public IoTEventsRequestPrivate {

public:
    DeleteAlarmModelRequestPrivate(const IoTEventsRequest::Action action,
                                   DeleteAlarmModelRequest * const q);
    DeleteAlarmModelRequestPrivate(const DeleteAlarmModelRequestPrivate &other,
                                   DeleteAlarmModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAlarmModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
