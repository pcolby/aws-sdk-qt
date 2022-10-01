// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorEmergencyCallingConfigurationResponse;

class GetVoiceConnectorEmergencyCallingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit GetVoiceConnectorEmergencyCallingConfigurationResponsePrivate(GetVoiceConnectorEmergencyCallingConfigurationResponse * const q);

    void parseGetVoiceConnectorEmergencyCallingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorEmergencyCallingConfigurationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorEmergencyCallingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
