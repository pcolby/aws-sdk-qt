// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETDEFAULTMESSAGETYPEREQUEST_P_H
#define QTAWS_SETDEFAULTMESSAGETYPEREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "setdefaultmessagetyperequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetDefaultMessageTypeRequest;

class SetDefaultMessageTypeRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    SetDefaultMessageTypeRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   SetDefaultMessageTypeRequest * const q);
    SetDefaultMessageTypeRequestPrivate(const SetDefaultMessageTypeRequestPrivate &other,
                                   SetDefaultMessageTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetDefaultMessageTypeRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
