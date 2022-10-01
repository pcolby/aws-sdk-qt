// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEVTLDEVICETYPEREQUEST_P_H
#define QTAWS_UPDATEVTLDEVICETYPEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "updatevtldevicetyperequest.h"

namespace QtAws {
namespace StorageGateway {

class UpdateVTLDeviceTypeRequest;

class UpdateVTLDeviceTypeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    UpdateVTLDeviceTypeRequestPrivate(const StorageGatewayRequest::Action action,
                                   UpdateVTLDeviceTypeRequest * const q);
    UpdateVTLDeviceTypeRequestPrivate(const UpdateVTLDeviceTypeRequestPrivate &other,
                                   UpdateVTLDeviceTypeRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateVTLDeviceTypeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
