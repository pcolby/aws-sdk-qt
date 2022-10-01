// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONSETSENDINGOPTIONSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putconfigurationsetsendingoptionsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetSendingOptionsRequest;

class PutConfigurationSetSendingOptionsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutConfigurationSetSendingOptionsRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutConfigurationSetSendingOptionsRequest * const q);
    PutConfigurationSetSendingOptionsRequestPrivate(const PutConfigurationSetSendingOptionsRequestPrivate &other,
                                   PutConfigurationSetSendingOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetSendingOptionsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
