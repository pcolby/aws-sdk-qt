// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTBUSRESPONSE_P_H
#define QTAWS_CREATEEVENTBUSRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class CreateEventBusResponse;

class CreateEventBusResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit CreateEventBusResponsePrivate(CreateEventBusResponse * const q);

    void parseCreateEventBusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEventBusResponse)
    Q_DISABLE_COPY(CreateEventBusResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
