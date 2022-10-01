// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTBUSRESPONSE_H
#define QTAWS_CREATEEVENTBUSRESPONSE_H

#include "eventbridgeresponse.h"
#include "createeventbusrequest.h"

namespace QtAws {
namespace EventBridge {

class CreateEventBusResponsePrivate;

class QTAWSEVENTBRIDGE_EXPORT CreateEventBusResponse : public EventBridgeResponse {
    Q_OBJECT

public:
    CreateEventBusResponse(const CreateEventBusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEventBusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventBusResponse)
    Q_DISABLE_COPY(CreateEventBusResponse)

};

} // namespace EventBridge
} // namespace QtAws

#endif
