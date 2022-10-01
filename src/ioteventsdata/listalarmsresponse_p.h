// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTALARMSRESPONSE_P_H
#define QTAWS_LISTALARMSRESPONSE_P_H

#include "ioteventsdataresponse_p.h"

namespace QtAws {
namespace IoTEventsData {

class ListAlarmsResponse;

class ListAlarmsResponsePrivate : public IoTEventsDataResponsePrivate {

public:

    explicit ListAlarmsResponsePrivate(ListAlarmsResponse * const q);

    void parseListAlarmsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListAlarmsResponse)
    Q_DISABLE_COPY(ListAlarmsResponsePrivate)

};

} // namespace IoTEventsData
} // namespace QtAws

#endif
