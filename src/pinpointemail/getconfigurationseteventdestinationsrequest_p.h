// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_P_H
#define QTAWS_GETCONFIGURATIONSETEVENTDESTINATIONSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "getconfigurationseteventdestinationsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class GetConfigurationSetEventDestinationsRequest;

class GetConfigurationSetEventDestinationsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    GetConfigurationSetEventDestinationsRequestPrivate(const PinpointEmailRequest::Action action,
                                   GetConfigurationSetEventDestinationsRequest * const q);
    GetConfigurationSetEventDestinationsRequestPrivate(const GetConfigurationSetEventDestinationsRequestPrivate &other,
                                   GetConfigurationSetEventDestinationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetConfigurationSetEventDestinationsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
