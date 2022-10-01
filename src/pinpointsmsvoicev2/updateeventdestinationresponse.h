// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTDESTINATIONRESPONSE_H
#define QTAWS_UPDATEEVENTDESTINATIONRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "updateeventdestinationrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdateEventDestinationResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT UpdateEventDestinationResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    UpdateEventDestinationResponse(const UpdateEventDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateEventDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateEventDestinationResponse)
    Q_DISABLE_COPY(UpdateEventDestinationResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
