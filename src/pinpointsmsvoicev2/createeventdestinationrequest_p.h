// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEVENTDESTINATIONREQUEST_P_H
#define QTAWS_CREATEEVENTDESTINATIONREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "createeventdestinationrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class CreateEventDestinationRequest;

class CreateEventDestinationRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    CreateEventDestinationRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   CreateEventDestinationRequest * const q);
    CreateEventDestinationRequestPrivate(const CreateEventDestinationRequestPrivate &other,
                                   CreateEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateEventDestinationRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
