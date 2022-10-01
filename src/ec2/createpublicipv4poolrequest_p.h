// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPUBLICIPV4POOLREQUEST_P_H
#define QTAWS_CREATEPUBLICIPV4POOLREQUEST_P_H

#include "ec2request_p.h"
#include "createpublicipv4poolrequest.h"

namespace QtAws {
namespace Ec2 {

class CreatePublicIpv4PoolRequest;

class CreatePublicIpv4PoolRequestPrivate : public Ec2RequestPrivate {

public:
    CreatePublicIpv4PoolRequestPrivate(const Ec2Request::Action action,
                                   CreatePublicIpv4PoolRequest * const q);
    CreatePublicIpv4PoolRequestPrivate(const CreatePublicIpv4PoolRequestPrivate &other,
                                   CreatePublicIpv4PoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreatePublicIpv4PoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
