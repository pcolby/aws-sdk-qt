// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEFAULTVPCREQUEST_P_H
#define QTAWS_CREATEDEFAULTVPCREQUEST_P_H

#include "ec2request_p.h"
#include "createdefaultvpcrequest.h"

namespace QtAws {
namespace Ec2 {

class CreateDefaultVpcRequest;

class CreateDefaultVpcRequestPrivate : public Ec2RequestPrivate {

public:
    CreateDefaultVpcRequestPrivate(const Ec2Request::Action action,
                                   CreateDefaultVpcRequest * const q);
    CreateDefaultVpcRequestPrivate(const CreateDefaultVpcRequestPrivate &other,
                                   CreateDefaultVpcRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateDefaultVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
