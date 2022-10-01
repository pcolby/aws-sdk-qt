// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEQUEUEDMESSAGESRESPONSE_H
#define QTAWS_DELETEQUEUEDMESSAGESRESPONSE_H

#include "iotwirelessresponse.h"
#include "deletequeuedmessagesrequest.h"

namespace QtAws {
namespace IoTWireless {

class DeleteQueuedMessagesResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DeleteQueuedMessagesResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DeleteQueuedMessagesResponse(const DeleteQueuedMessagesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteQueuedMessagesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteQueuedMessagesResponse)
    Q_DISABLE_COPY(DeleteQueuedMessagesResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
