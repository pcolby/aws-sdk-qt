// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECACHEDISCSIVOLUMERESPONSE_P_H
#define QTAWS_CREATECACHEDISCSIVOLUMERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class CreateCachediSCSIVolumeResponse;

class CreateCachediSCSIVolumeResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit CreateCachediSCSIVolumeResponsePrivate(CreateCachediSCSIVolumeResponse * const q);

    void parseCreateCachediSCSIVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCachediSCSIVolumeResponse)
    Q_DISABLE_COPY(CreateCachediSCSIVolumeResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
