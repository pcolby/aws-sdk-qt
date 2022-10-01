// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTOREDISCSIVOLUMEREQUEST_P_H
#define QTAWS_CREATESTOREDISCSIVOLUMEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "createstorediscsivolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateStorediSCSIVolumeRequest;

class CreateStorediSCSIVolumeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CreateStorediSCSIVolumeRequestPrivate(const StorageGatewayRequest::Action action,
                                   CreateStorediSCSIVolumeRequest * const q);
    CreateStorediSCSIVolumeRequestPrivate(const CreateStorediSCSIVolumeRequestPrivate &other,
                                   CreateStorediSCSIVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateStorediSCSIVolumeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
