// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHDELETEDEVICEPOSITIONHISTORYREQUEST_H
#define QTAWS_BATCHDELETEDEVICEPOSITIONHISTORYREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class BatchDeleteDevicePositionHistoryRequestPrivate;

class QTAWSLOCATION_EXPORT BatchDeleteDevicePositionHistoryRequest : public LocationRequest {

public:
    BatchDeleteDevicePositionHistoryRequest(const BatchDeleteDevicePositionHistoryRequest &other);
    BatchDeleteDevicePositionHistoryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchDeleteDevicePositionHistoryRequest)

};

} // namespace Location
} // namespace QtAws

#endif
