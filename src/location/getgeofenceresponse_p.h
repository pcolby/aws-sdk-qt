// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOFENCERESPONSE_P_H
#define QTAWS_GETGEOFENCERESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class GetGeofenceResponse;

class GetGeofenceResponsePrivate : public LocationResponsePrivate {

public:

    explicit GetGeofenceResponsePrivate(GetGeofenceResponse * const q);

    void parseGetGeofenceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetGeofenceResponse)
    Q_DISABLE_COPY(GetGeofenceResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
