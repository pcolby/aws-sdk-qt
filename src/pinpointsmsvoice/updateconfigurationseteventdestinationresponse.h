// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONRESPONSE_H

#include "pinpointsmsvoiceresponse.h"
#include "updateconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class UpdateConfigurationSetEventDestinationResponsePrivate;

class QTAWSPINPOINTSMSVOICE_EXPORT UpdateConfigurationSetEventDestinationResponse : public PinpointSmsVoiceResponse {
    Q_OBJECT

public:
    UpdateConfigurationSetEventDestinationResponse(const UpdateConfigurationSetEventDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateConfigurationSetEventDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateConfigurationSetEventDestinationResponse)
    Q_DISABLE_COPY(UpdateConfigurationSetEventDestinationResponse)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
