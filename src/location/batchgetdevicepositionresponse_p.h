// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEVICEPOSITIONRESPONSE_P_H
#define QTAWS_BATCHGETDEVICEPOSITIONRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class BatchGetDevicePositionResponse;

class BatchGetDevicePositionResponsePrivate : public LocationResponsePrivate {

public:

    explicit BatchGetDevicePositionResponsePrivate(BatchGetDevicePositionResponse * const q);

    void parseBatchGetDevicePositionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchGetDevicePositionResponse)
    Q_DISABLE_COPY(BatchGetDevicePositionResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
