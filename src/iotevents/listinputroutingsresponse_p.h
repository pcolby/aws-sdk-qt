// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINPUTROUTINGSRESPONSE_P_H
#define QTAWS_LISTINPUTROUTINGSRESPONSE_P_H

#include "ioteventsresponse_p.h"

namespace QtAws {
namespace IoTEvents {

class ListInputRoutingsResponse;

class ListInputRoutingsResponsePrivate : public IoTEventsResponsePrivate {

public:

    explicit ListInputRoutingsResponsePrivate(ListInputRoutingsResponse * const q);

    void parseListInputRoutingsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListInputRoutingsResponse)
    Q_DISABLE_COPY(ListInputRoutingsResponsePrivate)

};

} // namespace IoTEvents
} // namespace QtAws

#endif
