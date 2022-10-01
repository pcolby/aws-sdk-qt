// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTGEOFENCECOLLECTIONSREQUEST_H
#define QTAWS_LISTGEOFENCECOLLECTIONSREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class ListGeofenceCollectionsRequestPrivate;

class QTAWSLOCATION_EXPORT ListGeofenceCollectionsRequest : public LocationRequest {

public:
    ListGeofenceCollectionsRequest(const ListGeofenceCollectionsRequest &other);
    ListGeofenceCollectionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListGeofenceCollectionsRequest)

};

} // namespace Location
} // namespace QtAws

#endif
