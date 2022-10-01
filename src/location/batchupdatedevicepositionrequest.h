// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHUPDATEDEVICEPOSITIONREQUEST_H
#define QTAWS_BATCHUPDATEDEVICEPOSITIONREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class BatchUpdateDevicePositionRequestPrivate;

class QTAWSLOCATION_EXPORT BatchUpdateDevicePositionRequest : public LocationRequest {

public:
    BatchUpdateDevicePositionRequest(const BatchUpdateDevicePositionRequest &other);
    BatchUpdateDevicePositionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchUpdateDevicePositionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
