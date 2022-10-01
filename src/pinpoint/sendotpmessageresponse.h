// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDOTPMESSAGERESPONSE_H
#define QTAWS_SENDOTPMESSAGERESPONSE_H

#include "pinpointresponse.h"
#include "sendotpmessagerequest.h"

namespace QtAws {
namespace Pinpoint {

class SendOTPMessageResponsePrivate;

class QTAWSPINPOINT_EXPORT SendOTPMessageResponse : public PinpointResponse {
    Q_OBJECT

public:
    SendOTPMessageResponse(const SendOTPMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendOTPMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendOTPMessageResponse)
    Q_DISABLE_COPY(SendOTPMessageResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
