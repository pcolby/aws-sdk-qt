// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTSREQUEST_P_H
#define QTAWS_LISTINPUTSREQUEST_P_H

#include "ioteventsrequest_p.h"
#include "listinputsrequest.h"

namespace QtAws {
namespace IoTEvents {

class ListInputsRequest;

class ListInputsRequestPrivate : public IoTEventsRequestPrivate {

public:
    ListInputsRequestPrivate(const IoTEventsRequest::Action action,
                                   ListInputsRequest * const q);
    ListInputsRequestPrivate(const ListInputsRequestPrivate &other,
                                   ListInputsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInputsRequest)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
