// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIPAMSCOPEREQUEST_P_H
#define QTAWS_DELETEIPAMSCOPEREQUEST_P_H

#include "ec2request_p.h"
#include "deleteipamscoperequest.h"

namespace QtAws {
namespace Ec2 {

class DeleteIpamScopeRequest;

class DeleteIpamScopeRequestPrivate : public Ec2RequestPrivate {

public:
    DeleteIpamScopeRequestPrivate(const Ec2Request::Action action,
                                   DeleteIpamScopeRequest * const q);
    DeleteIpamScopeRequestPrivate(const DeleteIpamScopeRequestPrivate &other,
                                   DeleteIpamScopeRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIpamScopeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
