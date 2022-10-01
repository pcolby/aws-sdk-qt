// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEPUBLICIPV4POOLREQUEST_P_H
#define QTAWS_DELETEPUBLICIPV4POOLREQUEST_P_H

#include "ec2request_p.h"
#include "deletepublicipv4poolrequest.h"

namespace QtAws {
namespace Ec2 {

class DeletePublicIpv4PoolRequest;

class DeletePublicIpv4PoolRequestPrivate : public Ec2RequestPrivate {

public:
    DeletePublicIpv4PoolRequestPrivate(const Ec2Request::Action action,
                                   DeletePublicIpv4PoolRequest * const q);
    DeletePublicIpv4PoolRequestPrivate(const DeletePublicIpv4PoolRequestPrivate &other,
                                   DeletePublicIpv4PoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeletePublicIpv4PoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
