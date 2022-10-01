// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGEOFENCECOLLECTIONREQUEST_H
#define QTAWS_UPDATEGEOFENCECOLLECTIONREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class UpdateGeofenceCollectionRequestPrivate;

class QTAWSLOCATION_EXPORT UpdateGeofenceCollectionRequest : public LocationRequest {

public:
    UpdateGeofenceCollectionRequest(const UpdateGeofenceCollectionRequest &other);
    UpdateGeofenceCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateGeofenceCollectionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
