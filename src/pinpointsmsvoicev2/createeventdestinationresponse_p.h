// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTDESTINATIONRESPONSE_P_H
#define QTAWS_CREATEEVENTDESTINATIONRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreateEventDestinationResponse;

class CreateEventDestinationResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit CreateEventDestinationResponsePrivate(CreateEventDestinationResponse * const q);

    void parseCreateEventDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateEventDestinationResponse)
    Q_DISABLE_COPY(CreateEventDestinationResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
