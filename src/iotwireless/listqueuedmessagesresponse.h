// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTQUEUEDMESSAGESRESPONSE_H
#define QTAWS_LISTQUEUEDMESSAGESRESPONSE_H

#include "iotwirelessresponse.h"
#include "listqueuedmessagesrequest.h"

namespace QtAws {
namespace IoTWireless {

class ListQueuedMessagesResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT ListQueuedMessagesResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    ListQueuedMessagesResponse(const ListQueuedMessagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListQueuedMessagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListQueuedMessagesResponse)
    Q_DISABLE_COPY(ListQueuedMessagesResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
