// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOFENCECOLLECTIONRESPONSE_H
#define QTAWS_UPDATEGEOFENCECOLLECTIONRESPONSE_H

#include "locationresponse.h"
#include "updategeofencecollectionrequest.h"

namespace QtAws {
namespace Location {

class UpdateGeofenceCollectionResponsePrivate;

class QTAWSLOCATION_EXPORT UpdateGeofenceCollectionResponse : public LocationResponse {
    Q_OBJECT

public:
    UpdateGeofenceCollectionResponse(const UpdateGeofenceCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateGeofenceCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGeofenceCollectionResponse)
    Q_DISABLE_COPY(UpdateGeofenceCollectionResponse)

};

} // namespace Location
} // namespace QtAws

#endif
