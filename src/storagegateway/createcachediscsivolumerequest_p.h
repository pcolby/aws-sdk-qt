// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEDISCSIVOLUMEREQUEST_P_H
#define QTAWS_CREATECACHEDISCSIVOLUMEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "createcachediscsivolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateCachediSCSIVolumeRequest;

class CreateCachediSCSIVolumeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CreateCachediSCSIVolumeRequestPrivate(const StorageGatewayRequest::Action action,
                                   CreateCachediSCSIVolumeRequest * const q);
    CreateCachediSCSIVolumeRequestPrivate(const CreateCachediSCSIVolumeRequestPrivate &other,
                                   CreateCachediSCSIVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateCachediSCSIVolumeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
