// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEVALUATEGEOFENCESREQUEST_H
#define QTAWS_BATCHEVALUATEGEOFENCESREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class BatchEvaluateGeofencesRequestPrivate;

class QTAWSLOCATION_EXPORT BatchEvaluateGeofencesRequest : public LocationRequest {

public:
    BatchEvaluateGeofencesRequest(const BatchEvaluateGeofencesRequest &other);
    BatchEvaluateGeofencesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchEvaluateGeofencesRequest)

};

} // namespace Location
} // namespace QtAws

#endif
