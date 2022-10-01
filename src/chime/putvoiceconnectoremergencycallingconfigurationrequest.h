// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_H
#define QTAWS_PUTVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONREQUEST_H

#include "chimerequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorEmergencyCallingConfigurationRequestPrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorEmergencyCallingConfigurationRequest : public ChimeRequest {

public:
    PutVoiceConnectorEmergencyCallingConfigurationRequest(const PutVoiceConnectorEmergencyCallingConfigurationRequest &other);
    PutVoiceConnectorEmergencyCallingConfigurationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorEmergencyCallingConfigurationRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
