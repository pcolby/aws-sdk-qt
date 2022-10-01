// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H
#define QTAWS_UPDATECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "updateconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace PinpointEmail {

class UpdateConfigurationSetEventDestinationRequest;

class UpdateConfigurationSetEventDestinationRequestPrivate : public PinpointEmailRequestPrivate {

public:
    UpdateConfigurationSetEventDestinationRequestPrivate(const PinpointEmailRequest::Action action,
                                   UpdateConfigurationSetEventDestinationRequest * const q);
    UpdateConfigurationSetEventDestinationRequestPrivate(const UpdateConfigurationSetEventDestinationRequestPrivate &other,
                                   UpdateConfigurationSetEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateConfigurationSetEventDestinationRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
