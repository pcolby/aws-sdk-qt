// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHPUTGEOFENCEREQUEST_H
#define QTAWS_BATCHPUTGEOFENCEREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class BatchPutGeofenceRequestPrivate;

class QTAWSLOCATION_EXPORT BatchPutGeofenceRequest : public LocationRequest {

public:
    BatchPutGeofenceRequest(const BatchPutGeofenceRequest &other);
    BatchPutGeofenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchPutGeofenceRequest)

};

} // namespace Location
} // namespace QtAws

#endif
