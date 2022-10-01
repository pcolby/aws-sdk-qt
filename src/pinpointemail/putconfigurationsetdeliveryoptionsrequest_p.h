// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSREQUEST_P_H

#include "pinpointemailrequest_p.h"
#include "putconfigurationsetdeliveryoptionsrequest.h"

namespace QtAws {
namespace PinpointEmail {

class PutConfigurationSetDeliveryOptionsRequest;

class PutConfigurationSetDeliveryOptionsRequestPrivate : public PinpointEmailRequestPrivate {

public:
    PutConfigurationSetDeliveryOptionsRequestPrivate(const PinpointEmailRequest::Action action,
                                   PutConfigurationSetDeliveryOptionsRequest * const q);
    PutConfigurationSetDeliveryOptionsRequestPrivate(const PutConfigurationSetDeliveryOptionsRequestPrivate &other,
                                   PutConfigurationSetDeliveryOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetDeliveryOptionsRequest)

};

} // namespace PinpointEmail
} // namespace QtAws

#endif
