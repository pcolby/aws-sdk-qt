// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGEOFENCECOLLECTIONREQUEST_H
#define QTAWS_CREATEGEOFENCECOLLECTIONREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class CreateGeofenceCollectionRequestPrivate;

class QTAWSLOCATION_EXPORT CreateGeofenceCollectionRequest : public LocationRequest {

public:
    CreateGeofenceCollectionRequest(const CreateGeofenceCollectionRequest &other);
    CreateGeofenceCollectionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateGeofenceCollectionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
