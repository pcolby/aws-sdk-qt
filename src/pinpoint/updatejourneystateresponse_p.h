// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOURNEYSTATERESPONSE_P_H
#define QTAWS_UPDATEJOURNEYSTATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateJourneyStateResponse;

class UpdateJourneyStateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateJourneyStateResponsePrivate(UpdateJourneyStateResponse * const q);

    void parseUpdateJourneyStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJourneyStateResponse)
    Q_DISABLE_COPY(UpdateJourneyStateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
