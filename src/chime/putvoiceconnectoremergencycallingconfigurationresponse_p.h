// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_PUTVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorEmergencyCallingConfigurationResponse;

class PutVoiceConnectorEmergencyCallingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit PutVoiceConnectorEmergencyCallingConfigurationResponsePrivate(PutVoiceConnectorEmergencyCallingConfigurationResponse * const q);

    void parsePutVoiceConnectorEmergencyCallingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorEmergencyCallingConfigurationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorEmergencyCallingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
