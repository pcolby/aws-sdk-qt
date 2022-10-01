// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADDCACHEREQUEST_P_H
#define QTAWS_ADDCACHEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "addcacherequest.h"

namespace QtAws {
namespace StorageGateway {

class AddCacheRequest;

class AddCacheRequestPrivate : public StorageGatewayRequestPrivate {

public:
    AddCacheRequestPrivate(const StorageGatewayRequest::Action action,
                                   AddCacheRequest * const q);
    AddCacheRequestPrivate(const AddCacheRequestPrivate &other,
                                   AddCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(AddCacheRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
