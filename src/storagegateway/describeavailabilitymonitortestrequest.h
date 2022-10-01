// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAVAILABILITYMONITORTESTREQUEST_H
#define QTAWS_DESCRIBEAVAILABILITYMONITORTESTREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeAvailabilityMonitorTestRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeAvailabilityMonitorTestRequest : public StorageGatewayRequest {

public:
    DescribeAvailabilityMonitorTestRequest(const DescribeAvailabilityMonitorTestRequest &other);
    DescribeAvailabilityMonitorTestRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeAvailabilityMonitorTestRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
