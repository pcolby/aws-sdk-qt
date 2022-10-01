// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBEFILESYSTEMASSOCIATIONSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describefilesystemassociationsrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeFileSystemAssociationsRequest;

class DescribeFileSystemAssociationsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeFileSystemAssociationsRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeFileSystemAssociationsRequest * const q);
    DescribeFileSystemAssociationsRequestPrivate(const DescribeFileSystemAssociationsRequestPrivate &other,
                                   DescribeFileSystemAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeFileSystemAssociationsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
