// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_P_H
#define QTAWS_DELETEVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorEmergencyCallingConfigurationResponse;

class DeleteVoiceConnectorEmergencyCallingConfigurationResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteVoiceConnectorEmergencyCallingConfigurationResponsePrivate(DeleteVoiceConnectorEmergencyCallingConfigurationResponse * const q);

    void parseDeleteVoiceConnectorEmergencyCallingConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorEmergencyCallingConfigurationResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorEmergencyCallingConfigurationResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
