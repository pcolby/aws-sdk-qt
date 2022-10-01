// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDEVICEPOSITIONHISTORYREQUEST_P_H
#define QTAWS_BATCHDELETEDEVICEPOSITIONHISTORYREQUEST_P_H

#include "locationrequest_p.h"
#include "batchdeletedevicepositionhistoryrequest.h"

namespace QtAws {
namespace Location {

class BatchDeleteDevicePositionHistoryRequest;

class BatchDeleteDevicePositionHistoryRequestPrivate : public LocationRequestPrivate {

public:
    BatchDeleteDevicePositionHistoryRequestPrivate(const LocationRequest::Action action,
                                   BatchDeleteDevicePositionHistoryRequest * const q);
    BatchDeleteDevicePositionHistoryRequestPrivate(const BatchDeleteDevicePositionHistoryRequestPrivate &other,
                                   BatchDeleteDevicePositionHistoryRequest * const q);

private:
    Q_DECLARE_PUBLIC(BatchDeleteDevicePositionHistoryRequest)

};

} // namespace Location
} // namespace QtAws

#endif
