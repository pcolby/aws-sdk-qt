// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECHAPCREDENTIALSREQUEST_P_H
#define QTAWS_DESCRIBECHAPCREDENTIALSREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "describechapcredentialsrequest.h"

namespace QtAws {
namespace StorageGateway {

class DescribeChapCredentialsRequest;

class DescribeChapCredentialsRequestPrivate : public StorageGatewayRequestPrivate {

public:
    DescribeChapCredentialsRequestPrivate(const StorageGatewayRequest::Action action,
                                   DescribeChapCredentialsRequest * const q);
    DescribeChapCredentialsRequestPrivate(const DescribeChapCredentialsRequestPrivate &other,
                                   DescribeChapCredentialsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeChapCredentialsRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
