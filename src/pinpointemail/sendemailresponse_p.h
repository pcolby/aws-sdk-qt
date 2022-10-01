// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDEMAILRESPONSE_P_H
#define QTAWS_SENDEMAILRESPONSE_P_H

#include "pinpointemailresponse_p.h"

namespace QtAws {
namespace PinpointEmail {

class SendEmailResponse;

class SendEmailResponsePrivate : public PinpointEmailResponsePrivate {

public:

    explicit SendEmailResponsePrivate(SendEmailResponse * const q);

    void parseSendEmailResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendEmailResponse)
    Q_DISABLE_COPY(SendEmailResponsePrivate)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
