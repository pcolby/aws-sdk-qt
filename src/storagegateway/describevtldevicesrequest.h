// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVTLDEVICESREQUEST_H
#define QTAWS_DESCRIBEVTLDEVICESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeVTLDevicesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeVTLDevicesRequest : public StorageGatewayRequest {

public:
    DescribeVTLDevicesRequest(const DescribeVTLDevicesRequest &other);
    DescribeVTLDevicesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeVTLDevicesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
