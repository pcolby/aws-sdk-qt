// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REQUESTPHONENUMBERREQUEST_P_H
#define QTAWS_REQUESTPHONENUMBERREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "requestphonenumberrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class RequestPhoneNumberRequest;

class RequestPhoneNumberRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    RequestPhoneNumberRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   RequestPhoneNumberRequest * const q);
    RequestPhoneNumberRequestPrivate(const RequestPhoneNumberRequestPrivate &other,
                                   RequestPhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(RequestPhoneNumberRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
