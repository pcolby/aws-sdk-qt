// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOFENCECOLLECTIONRESPONSE_P_H
#define QTAWS_DELETEGEOFENCECOLLECTIONRESPONSE_P_H

#include "locationresponse_p.h"

namespace QtAws {
namespace Location {

class DeleteGeofenceCollectionResponse;

class DeleteGeofenceCollectionResponsePrivate : public LocationResponsePrivate {

public:

    explicit DeleteGeofenceCollectionResponsePrivate(DeleteGeofenceCollectionResponse * const q);

    void parseDeleteGeofenceCollectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGeofenceCollectionResponse)
    Q_DISABLE_COPY(DeleteGeofenceCollectionResponsePrivate)

};

} // namespace Location
} // namespace QtAws

#endif
