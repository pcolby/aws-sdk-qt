// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectoremergencycallingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorEmergencyCallingConfigurationRequest;

class GetVoiceConnectorEmergencyCallingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    GetVoiceConnectorEmergencyCallingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   GetVoiceConnectorEmergencyCallingConfigurationRequest * const q);
    GetVoiceConnectorEmergencyCallingConfigurationRequestPrivate(const GetVoiceConnectorEmergencyCallingConfigurationRequestPrivate &other,
                                   GetVoiceConnectorEmergencyCallingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetVoiceConnectorEmergencyCallingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
