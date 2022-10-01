// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMMODELSREQUEST_P_H
#define QTAWS_LISTALARMMODELSREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "listalarmmodelsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListAlarmModelsRequest;

class ListAlarmModelsRequestPrivate : public IoTEventsRequestPrivate {

public:
    ListAlarmModelsRequestPrivate(const IoTEventsRequest::Action action,
                                   ListAlarmModelsRequest * const q);
    ListAlarmModelsRequestPrivate(const ListAlarmModelsRequestPrivate &other,
                                   ListAlarmModelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAlarmModelsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
