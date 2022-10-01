// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOFENCECOLLECTIONRESPONSE_H
#define QTAWS_DELETEGEOFENCECOLLECTIONRESPONSE_H

#include "locationresponse.h"
#include "deletegeofencecollectionrequest.h"

namespace QtAws {
namespace Location {

class DeleteGeofenceCollectionResponsePrivate;

class QTAWSLOCATION_EXPORT DeleteGeofenceCollectionResponse : public LocationResponse {
    Q_OBJECT

public:
    DeleteGeofenceCollectionResponse(const DeleteGeofenceCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteGeofenceCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGeofenceCollectionResponse)
    Q_DISABLE_COPY(DeleteGeofenceCollectionResponse)

};

} // namespace Location
} // namespace QtAws

#endif
