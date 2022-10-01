// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMISSIONPROFILERESPONSE_P_H
#define QTAWS_DELETEMISSIONPROFILERESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class DeleteMissionProfileResponse;

class DeleteMissionProfileResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit DeleteMissionProfileResponsePrivate(DeleteMissionProfileResponse * const q);

    void parseDeleteMissionProfileResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteMissionProfileResponse)
    Q_DISABLE_COPY(DeleteMissionProfileResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
