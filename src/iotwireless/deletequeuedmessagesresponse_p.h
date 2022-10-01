// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDMESSAGESRESPONSE_P_H
#define QTAWS_DELETEQUEUEDMESSAGESRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DeleteQueuedMessagesResponse;

class DeleteQueuedMessagesResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DeleteQueuedMessagesResponsePrivate(DeleteQueuedMessagesResponse * const q);

    void parseDeleteQueuedMessagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteQueuedMessagesResponse)
    Q_DISABLE_COPY(DeleteQueuedMessagesResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
