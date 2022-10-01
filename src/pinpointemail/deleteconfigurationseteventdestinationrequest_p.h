// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H
#define QTAWS_DELETECONFIGURATIONSETEVENTDESTINATIONREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "deleteconfigurationseteventdestinationrequest.h"

namespace QtAws {
namespace PinpointEmail {

class DeleteConfigurationSetEventDestinationRequest;

class DeleteConfigurationSetEventDestinationRequestPrivate : public PinpointEmailRequestPrivate {

public:
    DeleteConfigurationSetEventDestinationRequestPrivate(const PinpointEmailRequest::Action action,
                                   DeleteConfigurationSetEventDestinationRequest * const q);
    DeleteConfigurationSetEventDestinationRequestPrivate(const DeleteConfigurationSetEventDestinationRequestPrivate &other,
                                   DeleteConfigurationSetEventDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteConfigurationSetEventDestinationRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
