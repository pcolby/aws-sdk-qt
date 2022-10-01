// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETLOCATIONSRESPONSE_P_H
#define QTAWS_CREATEFLEETLOCATIONSRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class CreateFleetLocationsResponse;

class CreateFleetLocationsResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit CreateFleetLocationsResponsePrivate(CreateFleetLocationsResponse * const q);

    void parseCreateFleetLocationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateFleetLocationsResponse)
    Q_DISABLE_COPY(CreateFleetLocationsResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
