// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTFROMVOLUMERECOVERYPOINTRESPONSE_P_H
#define QTAWS_CREATESNAPSHOTFROMVOLUMERECOVERYPOINTRESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CreateSnapshotFromVolumeRecoveryPointResponse;

class CreateSnapshotFromVolumeRecoveryPointResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CreateSnapshotFromVolumeRecoveryPointResponsePrivate(CreateSnapshotFromVolumeRecoveryPointResponse * const q);

    void parseCreateSnapshotFromVolumeRecoveryPointResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateSnapshotFromVolumeRecoveryPointResponse)
    Q_DISABLE_COPY(CreateSnapshotFromVolumeRecoveryPointResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
