// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H

#include "pinpointsmsvoicerequest_p.h"
#include "createconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class CreateConfigurationSetEventDestinationRequest;

class CreateConfigurationSetEventDestinationRequestPrivate : public PinpointSmsVoiceRequestPrivate {

public:
    CreateConfigurationSetEventDestinationRequestPrivate(const PinpointSmsVoiceRequest::Action action,
                                   CreateConfigurationSetEventDestinationRequest * const q);
    CreateConfigurationSetEventDestinationRequestPrivate(const CreateConfigurationSetEventDestinationRequestPrivate &other,
                                   CreateConfigurationSetEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetEventDestinationRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
