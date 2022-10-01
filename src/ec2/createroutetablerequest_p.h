// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROUTETABLEREQUEST_P_H
#define QTAWS_CREATEROUTETABLEREQUEST_P_H

#include "ec2request_p.h"
#include "createroutetablerequest.h"

namespace QtAws {
namespace Ec2 {

class CreateRouteTableRequest;

class CreateRouteTableRequestPrivate : public Ec2RequestPrivate {

public:
    CreateRouteTableRequestPrivate(const Ec2Request::Action action,
                                   CreateRouteTableRequest * const q);
    CreateRouteTableRequestPrivate(const CreateRouteTableRequestPrivate &other,
                                   CreateRouteTableRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateRouteTableRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
