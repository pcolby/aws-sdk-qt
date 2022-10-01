// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEMAINTENANCESTARTTIMEREQUEST_P_H
#define QTAWS_UPDATEMAINTENANCESTARTTIMEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatemaintenancestarttimerequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateMaintenanceStartTimeRequest;

class UpdateMaintenanceStartTimeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateMaintenanceStartTimeRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateMaintenanceStartTimeRequest * const q);
    UpdateMaintenanceStartTimeRequestPrivate(const UpdateMaintenanceStartTimeRequestPrivate &other,
                                   UpdateMaintenanceStartTimeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateMaintenanceStartTimeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
