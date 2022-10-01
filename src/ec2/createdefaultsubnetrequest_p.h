// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEFAULTSUBNETREQUEST_P_H
#define QTAWS_CREATEDEFAULTSUBNETREQUEST_P_H

#include "ec2request_p.h"
#include "createdefaultsubnetrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateDefaultSubnetRequest;

class CreateDefaultSubnetRequestPrivate : public Ec2RequestPrivate {

public:
    CreateDefaultSubnetRequestPrivate(const Ec2Request::Action action,
                                   CreateDefaultSubnetRequest * const q);
    CreateDefaultSubnetRequestPrivate(const CreateDefaultSubnetRequestPrivate &other,
                                   CreateDefaultSubnetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDefaultSubnetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
