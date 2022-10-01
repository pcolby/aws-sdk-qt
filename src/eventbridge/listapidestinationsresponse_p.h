// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPIDESTINATIONSRESPONSE_P_H
#define QTAWS_LISTAPIDESTINATIONSRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class ListApiDestinationsResponse;

class ListApiDestinationsResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit ListApiDestinationsResponsePrivate(ListApiDestinationsResponse * const q);

    void parseListApiDestinationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApiDestinationsResponse)
    Q_DISABLE_COPY(ListApiDestinationsResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
