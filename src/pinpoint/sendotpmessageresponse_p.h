// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDOTPMESSAGERESPONSE_P_H
#define QTAWS_SENDOTPMESSAGERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class SendOTPMessageResponse;

class SendOTPMessageResponsePrivate : public PinpointResponsePrivate {

public:

    explicit SendOTPMessageResponsePrivate(SendOTPMessageResponse * const q);

    void parseSendOTPMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendOTPMessageResponse)
    Q_DISABLE_COPY(SendOTPMessageResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
