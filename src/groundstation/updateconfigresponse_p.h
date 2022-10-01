// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGRESPONSE_P_H
#define QTAWS_UPDATECONFIGRESPONSE_P_H

#include "groundstationresponse_p.h"

namespace QtAws {
namespace GroundStation {

class UpdateConfigResponse;

class UpdateConfigResponsePrivate : public GroundStationResponsePrivate {

public:

    explicit UpdateConfigResponsePrivate(UpdateConfigResponse * const q);

    void parseUpdateConfigResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConfigResponse)
    Q_DISABLE_COPY(UpdateConfigResponsePrivate)

};

} // namespace GroundStation
} // namespace QtAws

#endif
