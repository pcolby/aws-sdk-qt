// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class UpdateConfigurationSetEventDestinationResponse;

class UpdateConfigurationSetEventDestinationResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit UpdateConfigurationSetEventDestinationResponsePrivate(UpdateConfigurationSetEventDestinationResponse * const q);

    void parseUpdateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetEventDestinationResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
