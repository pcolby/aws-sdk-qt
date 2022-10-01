// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEGEOFENCERESPONSE_P_H
#define QTAWS_BATCHDELETEGEOFENCERESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class BatchDeleteGeofenceResponse;

class BatchDeleteGeofenceResponsePrivate : public LocationResponsePrivate {

public:

    explicit BatchDeleteGeofenceResponsePrivate(BatchDeleteGeofenceResponse * const q);

    void parseBatchDeleteGeofenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchDeleteGeofenceResponse)
    Q_DISABLE_COPY(BatchDeleteGeofenceResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
