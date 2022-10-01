// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESMBFILESHARESREQUEST_H
#define QTAWS_DESCRIBESMBFILESHARESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSMBFileSharesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT DescribeSMBFileSharesRequest : public StorageGatewayRequest {

public:
    DescribeSMBFileSharesRequest(const DescribeSMBFileSharesRequest &other);
    DescribeSMBFileSharesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeSMBFileSharesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
