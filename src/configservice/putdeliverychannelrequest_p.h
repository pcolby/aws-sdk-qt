// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDELIVERYCHANNELREQUEST_P_H
#define QTAWS_PUTDELIVERYCHANNELREQUEST_P_H

#include "configservicerequest_p.h"
#include "putdeliverychannelrequest.h"

namespace QtAws {
namespace ConfigService {

class PutDeliveryChannelRequest;

class PutDeliveryChannelRequestPrivate : public ConfigServiceRequestPrivate {

public:
    PutDeliveryChannelRequestPrivate(const ConfigServiceRequest::Action action,
                                   PutDeliveryChannelRequest * const q);
    PutDeliveryChannelRequestPrivate(const PutDeliveryChannelRequestPrivate &other,
                                   PutDeliveryChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDeliveryChannelRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
