// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEVENTDESTINATIONREQUEST_P_H
#define QTAWS_UPDATEEVENTDESTINATIONREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "updateeventdestinationrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class UpdateEventDestinationRequest;

class UpdateEventDestinationRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    UpdateEventDestinationRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   UpdateEventDestinationRequest * const q);
    UpdateEventDestinationRequestPrivate(const UpdateEventDestinationRequestPrivate &other,
                                   UpdateEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEventDestinationRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
