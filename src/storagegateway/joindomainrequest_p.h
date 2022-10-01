// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_JOINDOMAINREQUEST_P_H
#define QTAWS_JOINDOMAINREQUEST_P_H

#include "storagegatewayrequest_p.h"
#include "joindomainrequest.h"

namespace QtAws {
namespace StorageGateway {

class JoinDomainRequest;

class JoinDomainRequestPrivate : public StorageGatewayRequestPrivate {

public:
    JoinDomainRequestPrivate(const StorageGatewayRequest::Action action,
                                   JoinDomainRequest * const q);
    JoinDomainRequestPrivate(const JoinDomainRequestPrivate &other,
                                   JoinDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(JoinDomainRequest)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
