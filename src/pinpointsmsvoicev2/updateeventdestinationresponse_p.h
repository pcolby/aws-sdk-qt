// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTDESTINATIONRESPONSE_P_H
#define QTAWS_UPDATEEVENTDESTINATIONRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdateEventDestinationResponse;

class UpdateEventDestinationResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit UpdateEventDestinationResponsePrivate(UpdateEventDestinationResponse * const q);

    void parseUpdateEventDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateEventDestinationResponse)
    Q_DISABLE_COPY(UpdateEventDestinationResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
