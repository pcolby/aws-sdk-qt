// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEJOURNEYRESPONSE_P_H
#define QTAWS_DELETEJOURNEYRESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class DeleteJourneyResponse;

class DeleteJourneyResponsePrivate : public PinpointResponsePrivate {

public:

    explicit DeleteJourneyResponsePrivate(DeleteJourneyResponse * const q);

    void parseDeleteJourneyResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteJourneyResponse)
    Q_DISABLE_COPY(DeleteJourneyResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
