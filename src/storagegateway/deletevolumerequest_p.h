// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVOLUMEREQUEST_P_H
#define QTAWS_DELETEVOLUMEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "deletevolumerequest.h"

namespace QtAws {
namespace StorageGateway {

class DeleteVolumeRequest;

class DeleteVolumeRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DeleteVolumeRequestPrivate(const StorageGatewayRequest::Action action,
                                   DeleteVolumeRequest * const q);
    DeleteVolumeRequestPrivate(const DeleteVolumeRequestPrivate &other,
                                   DeleteVolumeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVolumeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
