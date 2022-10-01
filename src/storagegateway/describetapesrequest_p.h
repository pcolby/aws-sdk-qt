// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETAPESREQUEST_P_H
#define QTAWS_DESCRIBETAPESREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describetapesrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeTapesRequest;

class DescribeTapesRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeTapesRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeTapesRequest * const q);
    DescribeTapesRequestPrivate(const DescribeTapesRequestPrivate &other,
                                   DescribeTapesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTapesRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
