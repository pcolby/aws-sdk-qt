// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGEOFENCECOLLECTIONRESPONSE_H
#define QTAWS_CREATEGEOFENCECOLLECTIONRESPONSE_H

#include "locationresponse.h"
#include "creategeofencecollectionrequest.h"

namespace QtAws {
namespace Location {

class CreateGeofenceCollectionResponsePrivate;

class QTAWSLOCATION_EXPORT CreateGeofenceCollectionResponse : public LocationResponse {
    Q_OBJECT

public:
    CreateGeofenceCollectionResponse(const CreateGeofenceCollectionRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateGeofenceCollectionRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGeofenceCollectionResponse)
    Q_DISABLE_COPY(CreateGeofenceCollectionResponse)

};

} // namespace Location
} // namespace QtAws

#endif
