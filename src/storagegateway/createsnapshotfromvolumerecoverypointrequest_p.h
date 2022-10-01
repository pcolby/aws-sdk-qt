// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTFROMVOLUMERECOVERYPOINTREQUEST_P_H
#define QTAWS_CREATESNAPSHOTFROMVOLUMERECOVERYPOINTREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "createsnapshotfromvolumerecoverypointrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateSnapshotFromVolumeRecoveryPointRequest;

class CreateSnapshotFromVolumeRecoveryPointRequestPrivate : public StorageGatewayRequestPrivate {

public:
    CreateSnapshotFromVolumeRecoveryPointRequestPrivate(const StorageGatewayRequest::Action action,
                                   CreateSnapshotFromVolumeRecoveryPointRequest * const q);
    CreateSnapshotFromVolumeRecoveryPointRequestPrivate(const CreateSnapshotFromVolumeRecoveryPointRequestPrivate &other,
                                   CreateSnapshotFromVolumeRecoveryPointRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotFromVolumeRecoveryPointRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
