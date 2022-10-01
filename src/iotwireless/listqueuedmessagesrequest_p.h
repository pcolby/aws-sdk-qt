// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUEDMESSAGESREQUEST_P_H
#define QTAWS_LISTQUEUEDMESSAGESREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "listqueuedmessagesrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListQueuedMessagesRequest;

class ListQueuedMessagesRequestPrivate : public IoTWirelessRequestPrivate {

public:
    ListQueuedMessagesRequestPrivate(const IoTWirelessRequest::Action action,
                                   ListQueuedMessagesRequest * const q);
    ListQueuedMessagesRequestPrivate(const ListQueuedMessagesRequestPrivate &other,
                                   ListQueuedMessagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListQueuedMessagesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
