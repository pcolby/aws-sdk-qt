// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOICEMESSAGESPENDLIMITOVERRIDEREQUEST_P_H
#define QTAWS_DELETEVOICEMESSAGESPENDLIMITOVERRIDEREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deletevoicemessagespendlimitoverriderequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteVoiceMessageSpendLimitOverrideRequest;

class DeleteVoiceMessageSpendLimitOverrideRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteVoiceMessageSpendLimitOverrideRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteVoiceMessageSpendLimitOverrideRequest * const q);
    DeleteVoiceMessageSpendLimitOverrideRequestPrivate(const DeleteVoiceMessageSpendLimitOverrideRequestPrivate &other,
                                   DeleteVoiceMessageSpendLimitOverrideRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVoiceMessageSpendLimitOverrideRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
