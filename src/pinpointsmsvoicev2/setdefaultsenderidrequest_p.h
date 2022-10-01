// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTSENDERIDREQUEST_P_H
#define QTAWS_SETDEFAULTSENDERIDREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "setdefaultsenderidrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetDefaultSenderIdRequest;

class SetDefaultSenderIdRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    SetDefaultSenderIdRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   SetDefaultSenderIdRequest * const q);
    SetDefaultSenderIdRequestPrivate(const SetDefaultSenderIdRequestPrivate &other,
                                   SetDefaultSenderIdRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetDefaultSenderIdRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
