// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBNETREQUEST_P_H
#define QTAWS_DELETESUBNETREQUEST_P_H

#include "ec2request_p.h"
#include "deletesubnetrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteSubnetRequest;

class DeleteSubnetRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteSubnetRequestPrivate(const Ec2Request::Action action,
                                   DeleteSubnetRequest * const q);
    DeleteSubnetRequestPrivate(const DeleteSubnetRequestPrivate &other,
                                   DeleteSubnetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSubnetRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
