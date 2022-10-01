// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEVPCREQUEST_P_H
#define QTAWS_CREATEVPCREQUEST_P_H

#include "ec2request_p.h"
#include "createvpcrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateVpcRequest;

class CreateVpcRequestPrivate : public Ec2RequestPrivate {

public:
    CreateVpcRequestPrivate(const Ec2Request::Action action,
                                   CreateVpcRequest * const q);
    CreateVpcRequestPrivate(const CreateVpcRequestPrivate &other,
                                   CreateVpcRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
