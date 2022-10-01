// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTDESTINATIONRESPONSE_H
#define QTAWS_DELETEEVENTDESTINATIONRESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "deleteeventdestinationrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteEventDestinationResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT DeleteEventDestinationResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    DeleteEventDestinationResponse(const DeleteEventDestinationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteEventDestinationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteEventDestinationResponse)
    Q_DISABLE_COPY(DeleteEventDestinationResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
