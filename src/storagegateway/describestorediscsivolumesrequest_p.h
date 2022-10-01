// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTOREDISCSIVOLUMESREQUEST_P_H
#define QTAWS_DESCRIBESTOREDISCSIVOLUMESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describestorediscsivolumesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeStorediSCSIVolumesRequest;

class DescribeStorediSCSIVolumesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeStorediSCSIVolumesRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeStorediSCSIVolumesRequest * const q);
    DescribeStorediSCSIVolumesRequestPrivate(const DescribeStorediSCSIVolumesRequestPrivate &other,
                                   DescribeStorediSCSIVolumesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStorediSCSIVolumesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
