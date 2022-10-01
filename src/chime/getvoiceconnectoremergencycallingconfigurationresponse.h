// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_H
#define QTAWS_GETVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "getvoiceconnectoremergencycallingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class GetVoiceConnectorEmergencyCallingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT GetVoiceConnectorEmergencyCallingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    GetVoiceConnectorEmergencyCallingConfigurationResponse(const GetVoiceConnectorEmergencyCallingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetVoiceConnectorEmergencyCallingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetVoiceConnectorEmergencyCallingConfigurationResponse)
    Q_DISABLE_COPY(GetVoiceConnectorEmergencyCallingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
