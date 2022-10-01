// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEJOURNEYRESPONSE_P_H
#define QTAWS_CREATEJOURNEYRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class CreateJourneyResponse;

class CreateJourneyResponsePrivate : public PinpointResponsePrivate {

public:

    explicit CreateJourneyResponsePrivate(CreateJourneyResponse * const q);

    void parseCreateJourneyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateJourneyResponse)
    Q_DISABLE_COPY(CreateJourneyResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
