// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSRESPONSE_H
#define QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSRESPONSE_H

#include "pinpointsmsvoiceresponse.h"
#include "getconfigurationseteventdestinationsrequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class GetConfigurationSetEventDestinationsResponsePrivate;

class QTAWSPINPOINTSMSVOICE_EXPORT GetConfigurationSetEventDestinationsResponse : public PinpointSmsVoiceResponse {
    Q_OBJECT

public:
    GetConfigurationSetEventDestinationsResponse(const GetConfigurationSetEventDestinationsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetConfigurationSetEventDestinationsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetConfigurationSetEventDestinationsResponse)
    Q_DISABLE_COPY(GetConfigurationSetEventDestinationsResponse)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
