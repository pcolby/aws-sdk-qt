// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUEDMESSAGESRESPONSE_P_H
#define QTAWS_LISTQUEUEDMESSAGESRESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class ListQueuedMessagesResponse;

class ListQueuedMessagesResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit ListQueuedMessagesResponsePrivate(ListQueuedMessagesResponse * const q);

    void parseListQueuedMessagesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListQueuedMessagesResponse)
    Q_DISABLE_COPY(ListQueuedMessagesResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
