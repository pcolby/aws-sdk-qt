// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATESUBNETREQUEST_P_H
#define QTAWS_CREATESUBNETREQUEST_P_H

#include "ec2request_p.h"
#include "createsubnetrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateSubnetRequest;

class CreateSubnetRequestPrivate : public Ec2RequestPrivate {

public:
    CreateSubnetRequestPrivate(const Ec2Request::Action action,
                                   CreateSubnetRequest * const q);
    CreateSubnetRequestPrivate(const CreateSubnetRequestPrivate &other,
                                   CreateSubnetRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateSubnetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
