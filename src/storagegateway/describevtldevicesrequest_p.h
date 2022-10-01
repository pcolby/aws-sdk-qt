// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEVTLDEVICESREQUEST_P_H
#define QTAWS_DESCRIBEVTLDEVICESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describevtldevicesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeVTLDevicesRequest;

class DescribeVTLDevicesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeVTLDevicesRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeVTLDevicesRequest * const q);
    DescribeVTLDevicesRequestPrivate(const DescribeVTLDevicesRequestPrivate &other,
                                   DescribeVTLDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeVTLDevicesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
