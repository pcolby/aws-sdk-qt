// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H

#include "pinpointsmsvoicerequest_p.h"
#include "deleteconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class DeleteConfigurationSetEventDestinationRequest;

class DeleteConfigurationSetEventDestinationRequestPrivate : public PinpointSmsVoiceRequestPrivate {

public:
    DeleteConfigurationSetEventDestinationRequestPrivate(const PinpointSmsVoiceRequest::Action action,
                                   DeleteConfigurationSetEventDestinationRequest * const q);
    DeleteConfigurationSetEventDestinationRequestPrivate(const DeleteConfigurationSetEventDestinationRequestPrivate &other,
                                   DeleteConfigurationSetEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetEventDestinationRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
