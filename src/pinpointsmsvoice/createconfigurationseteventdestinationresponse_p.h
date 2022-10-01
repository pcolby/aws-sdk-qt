// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H
#define QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H

#include "pinpointsmsvoiceresponse_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

class CreateConfigurationSetEventDestinationResponse;

class CreateConfigurationSetEventDestinationResponsePrivate : public PinpointSmsVoiceResponsePrivate {

public:

    explicit CreateConfigurationSetEventDestinationResponsePrivate(CreateConfigurationSetEventDestinationResponse * const q);

    void parseCreateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(CreateConfigurationSetEventDestinationResponsePrivate)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
