// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETTEXTMESSAGESPENDLIMITOVERRIDEREQUEST_P_H
#define QTAWS_SETTEXTMESSAGESPENDLIMITOVERRIDEREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "settextmessagespendlimitoverriderequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class SetTextMessageSpendLimitOverrideRequest;

class SetTextMessageSpendLimitOverrideRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    SetTextMessageSpendLimitOverrideRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   SetTextMessageSpendLimitOverrideRequest * const q);
    SetTextMessageSpendLimitOverrideRequestPrivate(const SetTextMessageSpendLimitOverrideRequestPrivate &other,
                                   SetTextMessageSpendLimitOverrideRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetTextMessageSpendLimitOverrideRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
