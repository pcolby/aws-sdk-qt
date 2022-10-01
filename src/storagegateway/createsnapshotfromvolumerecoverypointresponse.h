// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESNAPSHOTFROMVOLUMERECOVERYPOINTRESPONSE_H
#define QTAWS_CREATESNAPSHOTFROMVOLUMERECOVERYPOINTRESPONSE_H

#include "storagegatewayresponse.h"
#include "createsnapshotfromvolumerecoverypointrequest.h"

namespace QtAws {
namespace StorageGateway {

class CreateSnapshotFromVolumeRecoveryPointResponsePrivate;

class QTAWSSTORAGEGATEWAY_EXPORT CreateSnapshotFromVolumeRecoveryPointResponse : public StorageGatewayResponse {
    Q_OBJECT

public:
    CreateSnapshotFromVolumeRecoveryPointResponse(const CreateSnapshotFromVolumeRecoveryPointRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateSnapshotFromVolumeRecoveryPointRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateSnapshotFromVolumeRecoveryPointResponse)
    Q_DISABLE_COPY(CreateSnapshotFromVolumeRecoveryPointResponse)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
