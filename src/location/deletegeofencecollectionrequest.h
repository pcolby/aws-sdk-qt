// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGEOFENCECOLLECTIONREQUEST_H
#define QTAWS_DELETEGEOFENCECOLLECTIONREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class DeleteGeofenceCollectionRequestPrivate;

class QTAWSLOCATION_EXPORT DeleteGeofenceCollectionRequest : public LocationRequest {

public:
    DeleteGeofenceCollectionRequest(const DeleteGeofenceCollectionRequest &other);
    DeleteGeofenceCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteGeofenceCollectionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
