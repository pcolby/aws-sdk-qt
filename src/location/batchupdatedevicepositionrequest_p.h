// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEDEVICEPOSITIONREQUEST_P_H
#define QTAWS_BATCHUPDATEDEVICEPOSITIONREQUEST_P_H

#include "locationrequest_p.h"
#include "batchupdatedevicepositionrequest.h"

namespace QtAws {
namespace Location {

class BatchUpdateDevicePositionRequest;

class BatchUpdateDevicePositionRequestPrivate : public LocationRequestPrivate {

public:
    BatchUpdateDevicePositionRequestPrivate(const LocationRequest::Action action,
                                   BatchUpdateDevicePositionRequest * const q);
    BatchUpdateDevicePositionRequestPrivate(const BatchUpdateDevicePositionRequestPrivate &other,
                                   BatchUpdateDevicePositionRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchUpdateDevicePositionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
