// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEDISCSIVOLUMESREQUEST_P_H
#define QTAWS_DESCRIBECACHEDISCSIVOLUMESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describecachediscsivolumesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeCachediSCSIVolumesRequest;

class DescribeCachediSCSIVolumesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeCachediSCSIVolumesRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeCachediSCSIVolumesRequest * const q);
    DescribeCachediSCSIVolumesRequestPrivate(const DescribeCachediSCSIVolumesRequestPrivate &other,
                                   DescribeCachediSCSIVolumesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCachediSCSIVolumesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
