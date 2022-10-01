// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REFRESHCACHEREQUEST_P_H
#define QTAWS_REFRESHCACHEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "refreshcacherequest.h"

namespace QtAws {
namespace StorageGateway {

class RefreshCacheRequest;

class RefreshCacheRequestPrivate : public StorageGatewayRequestPrivate {

public:
    RefreshCacheRequestPrivate(const StorageGatewayRequest::Action action,
                                   RefreshCacheRequest * const q);
    RefreshCacheRequestPrivate(const RefreshCacheRequestPrivate &other,
                                   RefreshCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(RefreshCacheRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
