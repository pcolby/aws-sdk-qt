// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEPHONENUMBERREQUEST_P_H
#define QTAWS_UPDATEPHONENUMBERREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "updatephonenumberrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdatePhoneNumberRequest;

class UpdatePhoneNumberRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    UpdatePhoneNumberRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   UpdatePhoneNumberRequest * const q);
    UpdatePhoneNumberRequestPrivate(const UpdatePhoneNumberRequestPrivate &other,
                                   UpdatePhoneNumberRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdatePhoneNumberRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
