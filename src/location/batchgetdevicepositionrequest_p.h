// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEVICEPOSITIONREQUEST_P_H
#define QTAWS_BATCHGETDEVICEPOSITIONREQUEST_P_H

#include "locationrequest_p.h"
#include "batchgetdevicepositionrequest.h"

namespace QtAws {
namespace Location {

class BatchGetDevicePositionRequest;

class BatchGetDevicePositionRequestPrivate : public LocationRequestPrivate {

public:
    BatchGetDevicePositionRequestPrivate(const LocationRequest::Action action,
                                   BatchGetDevicePositionRequest * const q);
    BatchGetDevicePositionRequestPrivate(const BatchGetDevicePositionRequestPrivate &other,
                                   BatchGetDevicePositionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchGetDevicePositionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
