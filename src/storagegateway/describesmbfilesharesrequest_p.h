// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESMBFILESHARESREQUEST_P_H
#define QTAWS_DESCRIBESMBFILESHARESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describesmbfilesharesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeSMBFileSharesRequest;

class DescribeSMBFileSharesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeSMBFileSharesRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeSMBFileSharesRequest * const q);
    DescribeSMBFileSharesRequestPrivate(const DescribeSMBFileSharesRequestPrivate &other,
                                   DescribeSMBFileSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSMBFileSharesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
