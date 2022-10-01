// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PHONENUMBERVALIDATERESPONSE_P_H
#define QTAWS_PHONENUMBERVALIDATERESPONSE_P_H

#include "pinpointresponse_p.h"

namespace QtAws {
namespace Pinpoint {

class PhoneNumberValidateResponse;

class PhoneNumberValidateResponsePrivate : public PinpointResponsePrivate {

public:

    explicit PhoneNumberValidateResponsePrivate(PhoneNumberValidateResponse * const q);

    void parsePhoneNumberValidateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PhoneNumberValidateResponse)
    Q_DISABLE_COPY(PhoneNumberValidateResponsePrivate)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
