// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOFENCECOLLECTIONRESPONSE_P_H
#define QTAWS_UPDATEGEOFENCECOLLECTIONRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class UpdateGeofenceCollectionResponse;

class UpdateGeofenceCollectionResponsePrivate : public LocationResponsePrivate {

public:

    explicit UpdateGeofenceCollectionResponsePrivate(UpdateGeofenceCollectionResponse * const q);

    void parseUpdateGeofenceCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGeofenceCollectionResponse)
    Q_DISABLE_COPY(UpdateGeofenceCollectionResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
