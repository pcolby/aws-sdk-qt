// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_H
#define QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorEmergencyCallingConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorEmergencyCallingConfigurationRequest : public ChimeRequest {

public:
    GetVoiceConnectorEmergencyCallingConfigurationRequest(const GetVoiceConnectorEmergencyCallingConfigurationRequest &other);
    GetVoiceConnectorEmergencyCallingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorEmergencyCallingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
