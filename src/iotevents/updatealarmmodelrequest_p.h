// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEALARMMODELREQUEST_P_H
#define QTAWS_UPDATEALARMMODELREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "updatealarmmodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class UpdateAlarmModelRequest;

class UpdateAlarmModelRequestPrivate : public IoTEventsRequestPrivate {

public:
    UpdateAlarmModelRequestPrivate(const IoTEventsRequest::Action action,
                                   UpdateAlarmModelRequest * const q);
    UpdateAlarmModelRequestPrivate(const UpdateAlarmModelRequestPrivate &other,
                                   UpdateAlarmModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAlarmModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
