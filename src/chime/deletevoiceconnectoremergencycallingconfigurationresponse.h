// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_H
#define QTAWS_DELETEVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "deletevoiceconnectoremergencycallingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class DeleteVoiceConnectorEmergencyCallingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT DeleteVoiceConnectorEmergencyCallingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    DeleteVoiceConnectorEmergencyCallingConfigurationResponse(const DeleteVoiceConnectorEmergencyCallingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteVoiceConnectorEmergencyCallingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteVoiceConnectorEmergencyCallingConfigurationResponse)
    Q_DISABLE_COPY(DeleteVoiceConnectorEmergencyCallingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
