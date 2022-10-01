// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMREQUEST_P_H
#define QTAWS_DELETEIPAMREQUEST_P_H

#include "ec2request_p.h"
#include "deleteipamrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamRequest;

class DeleteIpamRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteIpamRequestPrivate(const Ec2Request::Action action,
                                   DeleteIpamRequest * const q);
    DeleteIpamRequestPrivate(const DeleteIpamRequestPrivate &other,
                                   DeleteIpamRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIpamRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
