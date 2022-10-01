// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEVALUATEGEOFENCESRESPONSE_P_H
#define QTAWS_BATCHEVALUATEGEOFENCESRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class BatchEvaluateGeofencesResponse;

class BatchEvaluateGeofencesResponsePrivate : public LocationResponsePrivate {

public:

    explicit BatchEvaluateGeofencesResponsePrivate(BatchEvaluateGeofencesResponse * const q);

    void parseBatchEvaluateGeofencesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchEvaluateGeofencesResponse)
    Q_DISABLE_COPY(BatchEvaluateGeofencesResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
