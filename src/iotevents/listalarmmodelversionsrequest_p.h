// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMMODELVERSIONSREQUEST_P_H
#define QTAWS_LISTALARMMODELVERSIONSREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "listalarmmodelversionsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListAlarmModelVersionsRequest;

class ListAlarmModelVersionsRequestPrivate : public IoTEventsRequestPrivate {

public:
    ListAlarmModelVersionsRequestPrivate(const IoTEventsRequest::Action action,
                                   ListAlarmModelVersionsRequest * const q);
    ListAlarmModelVersionsRequestPrivate(const ListAlarmModelVersionsRequestPrivate &other,
                                   ListAlarmModelVersionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAlarmModelVersionsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
