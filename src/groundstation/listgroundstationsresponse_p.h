// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGROUNDSTATIONSRESPONSE_P_H
#define QTAWS_LISTGROUNDSTATIONSRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class ListGroundStationsResponse;

class ListGroundStationsResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit ListGroundStationsResponsePrivate(ListGroundStationsResponse * const q);

    void parseListGroundStationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGroundStationsResponse)
    Q_DISABLE_COPY(ListGroundStationsResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
