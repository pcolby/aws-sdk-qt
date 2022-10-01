// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBENFSFILESHARESREQUEST_H
#define QTAWS_DESCRIBENFSFILESHARESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeNFSFileSharesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeNFSFileSharesRequest : public StorageGatewayRequest {

public:
    DescribeNFSFileSharesRequest(const DescribeNFSFileSharesRequest &other);
    DescribeNFSFileSharesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeNFSFileSharesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
