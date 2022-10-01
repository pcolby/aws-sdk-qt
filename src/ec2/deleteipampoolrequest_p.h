// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMPOOLREQUEST_P_H
#define QTAWS_DELETEIPAMPOOLREQUEST_P_H

#include "ec2request_p.h"
#include "deleteipampoolrequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamPoolRequest;

class DeleteIpamPoolRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteIpamPoolRequestPrivate(const Ec2Request::Action action,
                                   DeleteIpamPoolRequest * const q);
    DeleteIpamPoolRequestPrivate(const DeleteIpamPoolRequestPrivate &other,
                                   DeleteIpamPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIpamPoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
