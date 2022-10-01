// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYOTPMESSAGERESPONSE_P_H
#define QTAWS_VERIFYOTPMESSAGERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class VerifyOTPMessageResponse;

class VerifyOTPMessageResponsePrivate : public PinpointResponsePrivate {

public:

    explicit VerifyOTPMessageResponsePrivate(VerifyOTPMessageResponse * const q);

    void parseVerifyOTPMessageResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(VerifyOTPMessageResponse)
    Q_DISABLE_COPY(VerifyOTPMessageResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
