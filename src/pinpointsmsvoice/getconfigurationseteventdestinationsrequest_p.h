// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_P_H
#define QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_P_H

#include "pinpointsmsvoicerequest_p.h"
#include "getconfigurationseteventdestinationsrequest.h"

namespace QtAws {
namespace PinpointSmsVoice {

class GetConfigurationSetEventDestinationsRequest;

class GetConfigurationSetEventDestinationsRequestPrivate : public PinpointSmsVoiceRequestPrivate {

public:
    GetConfigurationSetEventDestinationsRequestPrivate(const PinpointSmsVoiceRequest::Action action,
                                   GetConfigurationSetEventDestinationsRequest * const q);
    GetConfigurationSetEventDestinationsRequestPrivate(const GetConfigurationSetEventDestinationsRequestPrivate &other,
                                   GetConfigurationSetEventDestinationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConfigurationSetEventDestinationsRequest)

};

} // namespace PinpointSmsVoice
} // namespace QtAws

#endif
