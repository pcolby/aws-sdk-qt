// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTFILESHARESREQUEST_P_H
#define QTAWS_LISTFILESHARESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "listfilesharesrequest.h"

namespace QtAws {
namespace StorageGateway {

class ListFileSharesRequest;

class ListFileSharesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ListFileSharesRequestPrivate(const StorageGatewayRequest::Action action,
                                   ListFileSharesRequest * const q);
    ListFileSharesRequestPrivate(const ListFileSharesRequestPrivate &other,
                                   ListFileSharesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListFileSharesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
