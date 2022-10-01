// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHGETDEVICEPOSITIONREQUEST_H
#define QTAWS_BATCHGETDEVICEPOSITIONREQUEST_H

#include "locationrequest.h"

namespace QtAws {
namespace Location {

class BatchGetDevicePositionRequestPrivate;

class QTAWSLOCATION_EXPORT BatchGetDevicePositionRequest : public LocationRequest {

public:
    BatchGetDevicePositionRequest(const BatchGetDevicePositionRequest &other);
    BatchGetDevicePositionRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(BatchGetDevicePositionRequest)

};

} // namespace Location
} // namespace QtAws

#endif
