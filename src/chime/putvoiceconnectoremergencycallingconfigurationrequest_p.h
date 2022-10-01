// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_P_H
#define QTAWS_PUTVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "putvoiceconnectoremergencycallingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorEmergencyCallingConfigurationRequest;

class PutVoiceConnectorEmergencyCallingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    PutVoiceConnectorEmergencyCallingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   PutVoiceConnectorEmergencyCallingConfigurationRequest * const q);
    PutVoiceConnectorEmergencyCallingConfigurationRequestPrivate(const PutVoiceConnectorEmergencyCallingConfigurationRequestPrivate &other,
                                   PutVoiceConnectorEmergencyCallingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutVoiceConnectorEmergencyCallingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
