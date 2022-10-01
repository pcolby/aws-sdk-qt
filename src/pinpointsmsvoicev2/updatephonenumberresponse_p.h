// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERRESPONSE_P_H
#define QTAWS_UPDATEPHONENUMBERRESPONSE_P_H

#include "pinpointsmsvoicev2response_p.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdatePhoneNumberResponse;

class UpdatePhoneNumberResponsePrivate : public PinpointSmsVoiceV2ResponsePrivate {

public:

    explicit UpdatePhoneNumberResponsePrivate(UpdatePhoneNumberResponse * const q);

    void parseUpdatePhoneNumberResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdatePhoneNumberResponse)
    Q_DISABLE_COPY(UpdatePhoneNumberResponsePrivate)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
