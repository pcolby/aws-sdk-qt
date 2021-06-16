/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_P_H
#define QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_P_H

#include "chimerequest_p.h"
#include "getvoiceconnectoremergencycallingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorEmergencyCallingConfigurationRequest;

class QTAWS_EXPORT GetVoiceConnectorEmergencyCallingConfigurationRequestPrivate : public ChimeRequestPrivate {

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
