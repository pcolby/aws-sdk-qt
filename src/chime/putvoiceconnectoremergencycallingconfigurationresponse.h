// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_H
#define QTAWS_PUTVOICECONNECTOREMERGENCYCALLINGCONFIGURATIONRESPONSE_H

#include "chimeresponse.h"
#include "putvoiceconnectoremergencycallingconfigurationrequest.h"

namespace QtAws {
namespace Chime {

class PutVoiceConnectorEmergencyCallingConfigurationResponsePrivate;

class QTAWSCHIME_EXPORT PutVoiceConnectorEmergencyCallingConfigurationResponse : public ChimeResponse {
    Q_OBJECT

public:
    PutVoiceConnectorEmergencyCallingConfigurationResponse(const PutVoiceConnectorEmergencyCallingConfigurationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const PutVoiceConnectorEmergencyCallingConfigurationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutVoiceConnectorEmergencyCallingConfigurationResponse)
    Q_DISABLE_COPY(PutVoiceConnectorEmergencyCallingConfigurationResponse)

};

} // namespace Chime
} // namespace QtAws

#endif
