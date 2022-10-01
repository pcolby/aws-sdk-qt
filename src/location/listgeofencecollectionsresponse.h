// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOFENCECOLLECTIONSRESPONSE_H
#define QTAWS_LISTGEOFENCECOLLECTIONSRESPONSE_H

#include "locationresponse.h"
#include "listgeofencecollectionsrequest.h"

namespace QtAws {
namespace Location {

class ListGeofenceCollectionsResponsePrivate;

class QTAWSLOCATION_EXPORT ListGeofenceCollectionsResponse : public LocationResponse {
    Q_OBJECT

public:
    ListGeofenceCollectionsResponse(const ListGeofenceCollectionsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListGeofenceCollectionsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeofenceCollectionsResponse)
    Q_DISABLE_COPY(ListGeofenceCollectionsResponse)

};

} // namespace Location
} // namespace QtAws

#endif
