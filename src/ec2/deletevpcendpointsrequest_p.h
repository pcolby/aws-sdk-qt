// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCENDPOINTSREQUEST_P_H
#define QTAWS_DELETEVPCENDPOINTSREQUEST_P_H

#include "ec2request_p.h"
#include "deletevpcendpointsrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcEndpointsRequest;

class DeleteVpcEndpointsRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteVpcEndpointsRequestPrivate(const Ec2Request::Action action,
                                   DeleteVpcEndpointsRequest * const q);
    DeleteVpcEndpointsRequestPrivate(const DeleteVpcEndpointsRequestPrivate &other,
                                   DeleteVpcEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcEndpointsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
