// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTDESTINATIONRESPONSE_H
#define QTAWS_CREATEEVENTDESTINATIONRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "createeventdestinationrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreateEventDestinationResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT CreateEventDestinationResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    CreateEventDestinationResponse(const CreateEventDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateEventDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateEventDestinationResponse)
    Q_DISABLE_COPY(CreateEventDestinationResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
