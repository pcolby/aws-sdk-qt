// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEGEOFENCEREQUEST_H
#define QTAWS_BATCHDELETEGEOFENCEREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class BatchDeleteGeofenceRequestPrivate;

class QTAWSLOCATION_EXPORT BatchDeleteGeofenceRequest : public LocationRequest {

public:
    BatchDeleteGeofenceRequest(const BatchDeleteGeofenceRequest &other);
    BatchDeleteGeofenceRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteGeofenceRequest)

};

} // namespace Location
} // namespace QtAws

#endif
