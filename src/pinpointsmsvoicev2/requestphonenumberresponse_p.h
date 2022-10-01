// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTPHONENUMBERRESPONSE_P_H
#define QTAWS_REQUESTPHONENUMBERRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class RequestPhoneNumberResponse;

class RequestPhoneNumberResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit RequestPhoneNumberResponsePrivate(RequestPhoneNumberResponse * const q);

    void parseRequestPhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(RequestPhoneNumberResponse)
    Q_DISABLE_COPY(RequestPhoneNumberResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
