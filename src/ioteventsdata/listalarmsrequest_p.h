// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMSREQUEST_P_H
#define QTAWS_LISTALARMSREQUEST_P_H

#include "ioteventsdatarequest_p.h"
#include "listalarmsrequest.h"

namespace QtAws {
namespace IoTEventsData {

class ListAlarmsRequest;

class ListAlarmsRequestPrivate : public IoTEventsDataRequestPrivate {

public:
    ListAlarmsRequestPrivate(const IoTEventsDataRequest::Action action,
                                   ListAlarmsRequest * const q);
    ListAlarmsRequestPrivate(const ListAlarmsRequestPrivate &other,
                                   ListAlarmsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAlarmsRequest)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
