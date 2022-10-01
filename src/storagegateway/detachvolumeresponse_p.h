// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHVOLUMERESPONSE_P_H
#define QTAWS_DETACHVOLUMERESPONSE_P_H

#include "storagegatewayresponse_p.h"

namespace QtAws {
namespace StorageGateway {

class DetachVolumeResponse;

class DetachVolumeResponsePrivate : public StorageGatewayResponsePrivate {

public:

    explicit DetachVolumeResponsePrivate(DetachVolumeResponse * const q);

    void parseDetachVolumeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachVolumeResponse)
    Q_DISABLE_COPY(DetachVolumeResponsePrivate)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
