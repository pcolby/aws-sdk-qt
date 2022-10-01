// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEMAINTENANCESTARTTIMEREQUEST_H
#define QTAWS_DESCRIBEMAINTENANCESTARTTIMEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeMaintenanceStartTimeRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeMaintenanceStartTimeRequest : public StorageGatewayRequest {

public:
    DescribeMaintenanceStartTimeRequest(const DescribeMaintenanceStartTimeRequest &other);
    DescribeMaintenanceStartTimeRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeMaintenanceStartTimeRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
