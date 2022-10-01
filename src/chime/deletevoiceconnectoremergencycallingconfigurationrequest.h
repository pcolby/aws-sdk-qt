// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_H
#define QTAWS_DELETEVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorEmergencyCallingConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorEmergencyCallingConfigurationRequest : public ChimeRequest {

public:
    DeleteVoiceConnectorEmergencyCallingConfigurationRequest(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest &other);
    DeleteVoiceConnectorEmergencyCallingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorEmergencyCallingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
