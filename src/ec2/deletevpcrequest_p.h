// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEVPCREQUEST_P_H
#define QTAWS_DELETEVPCREQUEST_P_H

#include "ec2request_p.h"
#include "deletevpcrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteVpcRequest;

class DeleteVpcRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteVpcRequestPrivate(const Ec2Request::Action action,
                                   DeleteVpcRequest * const q);
    DeleteVpcRequestPrivate(const DeleteVpcRequestPrivate &other,
                                   DeleteVpcRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteVpcRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
