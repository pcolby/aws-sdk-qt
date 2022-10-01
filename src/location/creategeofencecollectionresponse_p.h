// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGEOFENCECOLLECTIONRESPONSE_P_H
#define QTAWS_CREATEGEOFENCECOLLECTIONRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class CreateGeofenceCollectionResponse;

class CreateGeofenceCollectionResponsePrivate : public LocationResponsePrivate {

public:

    explicit CreateGeofenceCollectionResponsePrivate(CreateGeofenceCollectionResponse * const q);

    void parseCreateGeofenceCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGeofenceCollectionResponse)
    Q_DISABLE_COPY(CreateGeofenceCollectionResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
