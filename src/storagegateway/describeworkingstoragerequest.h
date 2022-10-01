// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEWORKINGSTORAGEREQUEST_H
#define QTAWS_DESCRIBEWORKINGSTORAGEREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeWorkingStorageRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeWorkingStorageRequest : public StorageGatewayRequest {

public:
    DescribeWorkingStorageRequest(const DescribeWorkingStorageRequest &other);
    DescribeWorkingStorageRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeWorkingStorageRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
