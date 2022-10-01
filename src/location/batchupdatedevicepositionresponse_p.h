// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEDEVICEPOSITIONRESPONSE_P_H
#define QTAWS_BATCHUPDATEDEVICEPOSITIONRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class BatchUpdateDevicePositionResponse;

class BatchUpdateDevicePositionResponsePrivate : public LocationResponsePrivate {

public:

    explicit BatchUpdateDevicePositionResponsePrivate(BatchUpdateDevicePositionResponse * const q);

    void parseBatchUpdateDevicePositionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchUpdateDevicePositionResponse)
    Q_DISABLE_COPY(BatchUpdateDevicePositionResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
