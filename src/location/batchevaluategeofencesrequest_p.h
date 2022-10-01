// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHEVALUATEGEOFENCESREQUEST_P_H
#define QTAWS_BATCHEVALUATEGEOFENCESREQUEST_P_H

#include "locationrequest_p.h"
#include "batchevaluategeofencesrequest.h"

namespace QtAws {
namespace Location {

class BatchEvaluateGeofencesRequest;

class BatchEvaluateGeofencesRequestPrivate : public LocationRequestPrivate {

public:
    BatchEvaluateGeofencesRequestPrivate(const LocationRequest::Action action,
                                   BatchEvaluateGeofencesRequest * const q);
    BatchEvaluateGeofencesRequestPrivate(const BatchEvaluateGeofencesRequestPrivate &other,
                                   BatchEvaluateGeofencesRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchEvaluateGeofencesRequest)

};

} // namespace Location
} // namespace QtAws

#endif
