// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYOTPMESSAGERESPONSE_H
#define QTAWS_VERIFYOTPMESSAGERESPONSE_H

#include "pinpointresponse.h"
#include "verifyotpmessagerequest.h"

namespace QtAws {
namespace Pinpoint {

class VerifyOTPMessageResponsePrivate;

class QTAWSPINPOINT_EXPORT VerifyOTPMessageResponse : public PinpointResponse {
    Q_OBJECT

public:
    VerifyOTPMessageResponse(const VerifyOTPMessageRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const VerifyOTPMessageRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(VerifyOTPMessageResponse)
    Q_DISABLE_COPY(VerifyOTPMessageResponse)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
