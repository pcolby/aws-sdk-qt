// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETJOURNEYRESPONSE_P_H
#define QTAWS_GETJOURNEYRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class GetJourneyResponse;

class GetJourneyResponsePrivate : public PinpointResponsePrivate {

public:

    explicit GetJourneyResponsePrivate(GetJourneyResponse * const q);

    void parseGetJourneyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetJourneyResponse)
    Q_DISABLE_COPY(GetJourneyResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
