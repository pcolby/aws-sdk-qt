// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILESHARESREQUEST_H
#define QTAWS_LISTFILESHARESREQUEST_H

#include "storagegatewayrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListFileSharesRequestPrivate;

class QTAWSSTORAGEGATEWAY_EXPORT ListFileSharesRequest : public StorageGatewayRequest {

public:
    ListFileSharesRequest(const ListFileSharesRequest &other);
    ListFileSharesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListFileSharesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
