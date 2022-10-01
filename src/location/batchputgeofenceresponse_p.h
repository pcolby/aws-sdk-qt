// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTGEOFENCERESPONSE_P_H
#define QTAWS_BATCHPUTGEOFENCERESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class BatchPutGeofenceResponse;

class BatchPutGeofenceResponsePrivate : public LocationResponsePrivate {

public:

    explicit BatchPutGeofenceResponsePrivate(BatchPutGeofenceResponse * const q);

    void parseBatchPutGeofenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchPutGeofenceResponse)
    Q_DISABLE_COPY(BatchPutGeofenceResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
