// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGATEWAYSOFTWARENOWREQUEST_P_H
#define QTAWS_UPDATEGATEWAYSOFTWARENOWREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updategatewaysoftwarenowrequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateGatewaySoftwareNowRequest;

class UpdateGatewaySoftwareNowRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateGatewaySoftwareNowRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateGatewaySoftwareNowRequest * const q);
    UpdateGatewaySoftwareNowRequestPrivate(const UpdateGatewaySoftwareNowRequestPrivate &other,
                                   UpdateGatewaySoftwareNowRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateGatewaySoftwareNowRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
