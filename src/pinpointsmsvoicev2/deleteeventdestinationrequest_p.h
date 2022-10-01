// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTDESTINATIONREQUEST_P_H
#define QTAWS_DELETEEVENTDESTINATIONREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "deleteeventdestinationrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DeleteEventDestinationRequest;

class DeleteEventDestinationRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DeleteEventDestinationRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DeleteEventDestinationRequest * const q);
    DeleteEventDestinationRequestPrivate(const DeleteEventDestinationRequestPrivate &other,
                                   DeleteEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEventDestinationRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
