// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_P_H
#define QTAWS_DELETEVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "deletevoiceconnectoremergencycallingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorEmergencyCallingConfigurationRequest;

class DeleteVoiceConnectorEmergencyCallingConfigurationRequestPrivate : public ChimeRequestPrivate {

public:
    DeleteVoiceConnectorEmergencyCallingConfigurationRequestPrivate(const ChimeRequest::Action action,
                                   DeleteVoiceConnectorEmergencyCallingConfigurationRequest * const q);
    DeleteVoiceConnectorEmergencyCallingConfigurationRequestPrivate(const DeleteVoiceConnectorEmergencyCallingConfigurationRequestPrivate &other,
                                   DeleteVoiceConnectorEmergencyCallingConfigurationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceConnectorEmergencyCallingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
