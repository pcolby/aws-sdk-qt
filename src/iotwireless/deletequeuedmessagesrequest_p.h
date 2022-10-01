// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDMESSAGESREQUEST_P_H
#define QTAWS_DELETEQUEUEDMESSAGESREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "deletequeuedmessagesrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteQueuedMessagesRequest;

class DeleteQueuedMessagesRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DeleteQueuedMessagesRequestPrivate(const IoTWirelessRequest::Action action,
                                   DeleteQueuedMessagesRequest * const q);
    DeleteQueuedMessagesRequestPrivate(const DeleteQueuedMessagesRequestPrivate &other,
                                   DeleteQueuedMessagesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteQueuedMessagesRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
