// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECACHEREQUEST_P_H
#define QTAWS_DESCRIBECACHEREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describecacherequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeCacheRequest;

class DescribeCacheRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeCacheRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeCacheRequest * const q);
    DescribeCacheRequestPrivate(const DescribeCacheRequestPrivate &other,
                                   DescribeCacheRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeCacheRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
