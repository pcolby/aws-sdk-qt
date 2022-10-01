// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENFSFILESHARESREQUEST_P_H
#define QTAWS_DESCRIBENFSFILESHARESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describenfsfilesharesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeNFSFileSharesRequest;

class DescribeNFSFileSharesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeNFSFileSharesRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeNFSFileSharesRequest * const q);
    DescribeNFSFileSharesRequestPrivate(const DescribeNFSFileSharesRequestPrivate &other,
                                   DescribeNFSFileSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeNFSFileSharesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
