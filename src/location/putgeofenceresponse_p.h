// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGEOFENCERESPONSE_P_H
#define QTAWS_PUTGEOFENCERESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class PutGeofenceResponse;

class PutGeofenceResponsePrivate : public LocationResponsePrivate {

public:

    explicit PutGeofenceResponsePrivate(PutGeofenceResponse * const q);

    void parsePutGeofenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutGeofenceResponse)
    Q_DISABLE_COPY(PutGeofenceResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
