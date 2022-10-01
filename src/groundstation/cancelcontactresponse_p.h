// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELCONTACTRESPONSE_P_H
#define QTAWS_CANCELCONTACTRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class CancelContactResponse;

class CancelContactResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit CancelContactResponsePrivate(CancelContactResponse * const q);

    void parseCancelContactResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelContactResponse)
    Q_DISABLE_COPY(CancelContactResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
