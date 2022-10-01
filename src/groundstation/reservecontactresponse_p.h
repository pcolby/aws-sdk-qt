// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESERVECONTACTRESPONSE_P_H
#define QTAWS_RESERVECONTACTRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class ReserveContactResponse;

class ReserveContactResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit ReserveContactResponsePrivate(ReserveContactResponse * const q);

    void parseReserveContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReserveContactResponse)
    Q_DISABLE_COPY(ReserveContactResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
