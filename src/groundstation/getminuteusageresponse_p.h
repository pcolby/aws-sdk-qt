// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETMINUTEUSAGERESPONSE_P_H
#define QTAWS_GETMINUTEUSAGERESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class GetMinuteUsageResponse;

class GetMinuteUsageResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit GetMinuteUsageResponsePrivate(GetMinuteUsageResponse * const q);

    void parseGetMinuteUsageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetMinuteUsageResponse)
    Q_DISABLE_COPY(GetMinuteUsageResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
