// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCONTACTMETHODVERIFICATIONRESPONSE_P_H
#define QTAWS_SENDCONTACTMETHODVERIFICATIONRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class SendContactMethodVerificationResponse;

class SendContactMethodVerificationResponsePrivate : public LightsailResponsePrivate {

public:

    explicit SendContactMethodVerificationResponsePrivate(SendContactMethodVerificationResponse * const q);

    void parseSendContactMethodVerificationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SendContactMethodVerificationResponse)
    Q_DISABLE_COPY(SendContactMethodVerificationResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
