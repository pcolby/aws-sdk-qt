// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESTOREDISCSIVOLUMERESPONSE_P_H
#define QTAWS_CREATESTOREDISCSIVOLUMERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CreateStorediSCSIVolumeResponse;

class CreateStorediSCSIVolumeResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CreateStorediSCSIVolumeResponsePrivate(CreateStorediSCSIVolumeResponse * const q);

    void parseCreateStorediSCSIVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateStorediSCSIVolumeResponse)
    Q_DISABLE_COPY(CreateStorediSCSIVolumeResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
