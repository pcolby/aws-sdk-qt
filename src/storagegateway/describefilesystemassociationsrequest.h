// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEFILESYSTEMASSOCIATIONSREQUEST_H
#define QTAWS_DESCRIBEFILESYSTEMASSOCIATIONSREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeFileSystemAssociationsRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeFileSystemAssociationsRequest : public StorageGatewayRequest {

public:
    DescribeFileSystemAssociationsRequest(const DescribeFileSystemAssociationsRequest &other);
    DescribeFileSystemAssociationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeFileSystemAssociationsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
