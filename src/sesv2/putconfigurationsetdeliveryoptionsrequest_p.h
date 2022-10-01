// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSREQUEST_P_H
#define QTAWS_PUTCONFIGURATIONSETDELIVERYOPTIONSREQUEST_P_H

#include "sesv2request_p.h"
#include "putconfigurationsetdeliveryoptionsrequest.h"

namespace QtAws {
namespace SESv2 {

class PutConfigurationSetDeliveryOptionsRequest;

class PutConfigurationSetDeliveryOptionsRequestPrivate : public SESv2RequestPrivate {

public:
    PutConfigurationSetDeliveryOptionsRequestPrivate(const SESv2Request::Action action,
                                   PutConfigurationSetDeliveryOptionsRequest * const q);
    PutConfigurationSetDeliveryOptionsRequestPrivate(const PutConfigurationSetDeliveryOptionsRequestPrivate &other,
                                   PutConfigurationSetDeliveryOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutConfigurationSetDeliveryOptionsRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
