// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPARTNEREVENTSOURCESRESPONSE_P_H
#define QTAWS_LISTPARTNEREVENTSOURCESRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class ListPartnerEventSourcesResponse;

class ListPartnerEventSourcesResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit ListPartnerEventSourcesResponsePrivate(ListPartnerEventSourcesResponse * const q);

    void parseListPartnerEventSourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPartnerEventSourcesResponse)
    Q_DISABLE_COPY(ListPartnerEventSourcesResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
