// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKINGSTORAGEREQUEST_P_H
#define QTAWS_DESCRIBEWORKINGSTORAGEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describeworkingstoragerequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeWorkingStorageRequest;

class DescribeWorkingStorageRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeWorkingStorageRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeWorkingStorageRequest * const q);
    DescribeWorkingStorageRequestPrivate(const DescribeWorkingStorageRequestPrivate &other,
                                   DescribeWorkingStorageRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeWorkingStorageRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
