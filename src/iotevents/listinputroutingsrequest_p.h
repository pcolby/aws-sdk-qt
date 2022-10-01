// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTROUTINGSREQUEST_P_H
#define QTAWS_LISTINPUTROUTINGSREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "listinputroutingsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListInputRoutingsRequest;

class ListInputRoutingsRequestPrivate : public IoTEventsRequestPrivate {

public:
    ListInputRoutingsRequestPrivate(const IoTEventsRequest::Action action,
                                   ListInputRoutingsRequest * const q);
    ListInputRoutingsRequestPrivate(const ListInputRoutingsRequestPrivate &other,
                                   ListInputRoutingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInputRoutingsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
