// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSRESPONSE_P_H
#define QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSRESPONSE_P_H

#include "pinpointsmsvoiceresponse_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

class GetConfigurationSetEventDestinationsResponse;

class GetConfigurationSetEventDestinationsResponsePrivate : public PinpointSmsVoiceResponsePrivate {

public:

    explicit GetConfigurationSetEventDestinationsResponsePrivate(GetConfigurationSetEventDestinationsResponse * const q);

    void parseGetConfigurationSetEventDestinationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConfigurationSetEventDestinationsResponse)
    Q_DISABLE_COPY(GetConfigurationSetEventDestinationsResponsePrivate)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
