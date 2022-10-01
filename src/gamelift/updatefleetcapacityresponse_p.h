// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLEETCAPACITYRESPONSE_P_H
#define QTAWS_UPDATEFLEETCAPACITYRESPONSE_P_H

#include "gameliftresponse_p.h"

namespace QtAws {
namespace GameLift {

class UpdateFleetCapacityResponse;

class UpdateFleetCapacityResponsePrivate : public GameLiftResponsePrivate {

public:

    explicit UpdateFleetCapacityResponsePrivate(UpdateFleetCapacityResponse * const q);

    void parseUpdateFleetCapacityResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateFleetCapacityResponse)
    Q_DISABLE_COPY(UpdateFleetCapacityResponsePrivate)

};

} // namespace GameLift
} // namespace QtAws

#endif
