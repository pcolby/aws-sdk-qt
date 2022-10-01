// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETVOICEMESSAGESPENDLIMITOVERRIDEREQUEST_P_H
#define QTAWS_SETVOICEMESSAGESPENDLIMITOVERRIDEREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "setvoicemessagespendlimitoverriderequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetVoiceMessageSpendLimitOverrideRequest;

class SetVoiceMessageSpendLimitOverrideRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    SetVoiceMessageSpendLimitOverrideRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   SetVoiceMessageSpendLimitOverrideRequest * const q);
    SetVoiceMessageSpendLimitOverrideRequestPrivate(const SetVoiceMessageSpendLimitOverrideRequestPrivate &other,
                                   SetVoiceMessageSpendLimitOverrideRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetVoiceMessageSpendLimitOverrideRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
