// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOFENCECOLLECTIONSRESPONSE_P_H
#define QTAWS_LISTGEOFENCECOLLECTIONSRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class ListGeofenceCollectionsResponse;

class ListGeofenceCollectionsResponsePrivate : public LocationResponsePrivate {

public:

    explicit ListGeofenceCollectionsResponsePrivate(ListGeofenceCollectionsResponse * const q);

    void parseListGeofenceCollectionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListGeofenceCollectionsResponse)
    Q_DISABLE_COPY(ListGeofenceCollectionsResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
