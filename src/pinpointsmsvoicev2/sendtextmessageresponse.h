// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDTEXTMESSAGERESPONSE_H
#define QTAWS_SENDTEXTMESSAGERESPONSE_H

#include "pinpointsmsvoicev2response.h"
#include "sendtextmessagerequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SendTextMessageResponsePrivate;

class QTAWSPINPOINTSMSVOICEV2_EXPORT SendTextMessageResponse : public PinpointSmsVoiceV2Response {
    Q_OBJECT

public:
    SendTextMessageResponse(const SendTextMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendTextMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendTextMessageResponse)
    Q_DISABLE_COPY(SendTextMessageResponse)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
