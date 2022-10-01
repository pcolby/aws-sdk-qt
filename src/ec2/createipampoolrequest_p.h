// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMPOOLREQUEST_P_H
#define QTAWS_CREATEIPAMPOOLREQUEST_P_H

#include "ec2request_p.h"
#include "createipampoolrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamPoolRequest;

class CreateIpamPoolRequestPrivate : public Ec2RequestPrivate {

public:
    CreateIpamPoolRequestPrivate(const Ec2Request::Action action,
                                   CreateIpamPoolRequest * const q);
    CreateIpamPoolRequestPrivate(const CreateIpamPoolRequestPrivate &other,
                                   CreateIpamPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIpamPoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
