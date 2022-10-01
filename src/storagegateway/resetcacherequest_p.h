// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RESETCACHEREQUEST_P_H
#define QTAWS_RESETCACHEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "resetcacherequest.h"

namespace QtAws {
namespace StorageGateway {

class ResetCacheRequest;

class ResetCacheRequestPrivate : public StorageGatewayRequestPrivate {

public:
    ResetCacheRequestPrivate(const StorageGatewayRequest::Action action,
                                   ResetCacheRequest * const q);
    ResetCacheRequestPrivate(const ResetCacheRequestPrivate &other,
                                   ResetCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(ResetCacheRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
