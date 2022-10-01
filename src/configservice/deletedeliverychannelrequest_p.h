// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDELIVERYCHANNELREQUEST_P_H
#define QTAWS_DELETEDELIVERYCHANNELREQUEST_P_H

#include "configservicerequest_p.h"
#include "deletedeliverychannelrequest.h"

namespace QtAws {
namespace ConfigService {

class DeleteDeliveryChannelRequest;

class DeleteDeliveryChannelRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DeleteDeliveryChannelRequestPrivate(const ConfigServiceRequest::Action action,
                                   DeleteDeliveryChannelRequest * const q);
    DeleteDeliveryChannelRequestPrivate(const DeleteDeliveryChannelRequestPrivate &other,
                                   DeleteDeliveryChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDeliveryChannelRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
