// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTEVENTSOURCESRESPONSE_P_H
#define QTAWS_LISTEVENTSOURCESRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class ListEventSourcesResponse;

class ListEventSourcesResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit ListEventSourcesResponsePrivate(ListEventSourcesResponse * const q);

    void parseListEventSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListEventSourcesResponse)
    Q_DISABLE_COPY(ListEventSourcesResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
