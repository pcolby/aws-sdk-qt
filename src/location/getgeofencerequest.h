// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETGEOFENCEREQUEST_H
#define QTAWS_GETGEOFENCEREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class GetGeofenceRequestPrivate;

class QTAWSLOCATION_EXPORT GetGeofenceRequest : public LocationRequest {

public:
    GetGeofenceRequest(const GetGeofenceRequest &other);
    GetGeofenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetGeofenceRequest)

};

} // namespace Location
} // namespace QtAws

#endif
