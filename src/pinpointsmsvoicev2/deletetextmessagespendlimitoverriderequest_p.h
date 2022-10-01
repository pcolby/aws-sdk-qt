// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDEREQUEST_P_H
#define QTAWS_DELETETEXTMESSAGESPENDLIMITOVERRIDEREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deletetextmessagespendlimitoverriderequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteTextMessageSpendLimitOverrideRequest;

class DeleteTextMessageSpendLimitOverrideRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteTextMessageSpendLimitOverrideRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteTextMessageSpendLimitOverrideRequest * const q);
    DeleteTextMessageSpendLimitOverrideRequestPrivate(const DeleteTextMessageSpendLimitOverrideRequestPrivate &other,
                                   DeleteTextMessageSpendLimitOverrideRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteTextMessageSpendLimitOverrideRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
