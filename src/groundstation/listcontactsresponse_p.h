// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONTACTSRESPONSE_P_H
#define QTAWS_LISTCONTACTSRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class ListContactsResponse;

class ListContactsResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit ListContactsResponsePrivate(ListContactsResponse * const q);

    void parseListContactsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListContactsResponse)
    Q_DISABLE_COPY(ListContactsResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
