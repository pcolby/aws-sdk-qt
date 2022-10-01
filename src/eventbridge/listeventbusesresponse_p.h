// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTBUSESRESPONSE_P_H
#define QTAWS_LISTEVENTBUSESRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class ListEventBusesResponse;

class ListEventBusesResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit ListEventBusesResponsePrivate(ListEventBusesResponse * const q);

    void parseListEventBusesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventBusesResponse)
    Q_DISABLE_COPY(ListEventBusesResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
