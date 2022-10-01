// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEALARMMODELREQUEST_P_H
#define QTAWS_CREATEALARMMODELREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "createalarmmodelrequest.h"

namespace QtAws {
namespace IoTEvents {

class CreateAlarmModelRequest;

class CreateAlarmModelRequestPrivate : public IoTEventsRequestPrivate {

public:
    CreateAlarmModelRequestPrivate(const IoTEventsRequest::Action action,
                                   CreateAlarmModelRequest * const q);
    CreateAlarmModelRequestPrivate(const CreateAlarmModelRequestPrivate &other,
                                   CreateAlarmModelRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAlarmModelRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
