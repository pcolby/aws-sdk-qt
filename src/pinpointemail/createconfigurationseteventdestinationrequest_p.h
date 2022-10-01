// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H
#define QTAWS_CREATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "createconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace PinpointEmail {

class CreateConfigurationSetEventDestinationRequest;

class CreateConfigurationSetEventDestinationRequestPrivate : public PinpointEmailRequestPrivate {

public:
    CreateConfigurationSetEventDestinationRequestPrivate(const PinpointEmailRequest::Action action,
                                   CreateConfigurationSetEventDestinationRequest * const q);
    CreateConfigurationSetEventDestinationRequestPrivate(const CreateConfigurationSetEventDestinationRequestPrivate &other,
                                   CreateConfigurationSetEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateConfigurationSetEventDestinationRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
