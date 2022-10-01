// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEJOURNEYRESPONSE_P_H
#define QTAWS_UPDATEJOURNEYRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class UpdateJourneyResponse;

class UpdateJourneyResponsePrivate : public PinpointResponsePrivate {

public:

    explicit UpdateJourneyResponsePrivate(UpdateJourneyResponse * const q);

    void parseUpdateJourneyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateJourneyResponse)
    Q_DISABLE_COPY(UpdateJourneyResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
