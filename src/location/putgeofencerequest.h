// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTGEOFENCEREQUEST_H
#define QTAWS_PUTGEOFENCEREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class PutGeofenceRequestPrivate;

class QTAWSLOCATION_EXPORT PutGeofenceRequest : public LocationRequest {

public:
    PutGeofenceRequest(const PutGeofenceRequest &other);
    PutGeofenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutGeofenceRequest)

};

} // namespace Location
} // namespace QtAws

#endif
