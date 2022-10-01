// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIPAMSCOPEREQUEST_P_H
#define QTAWS_CREATEIPAMSCOPEREQUEST_P_H

#include "ec2request_p.h"
#include "createipamscoperequest.h"

namespace QtAws {
namespace Ec2 {

class CreateIpamScopeRequest;

class CreateIpamScopeRequestPrivate : public Ec2RequestPrivate {

public:
    CreateIpamScopeRequestPrivate(const Ec2Request::Action action,
                                   CreateIpamScopeRequest * const q);
    CreateIpamScopeRequestPrivate(const CreateIpamScopeRequestPrivate &other,
                                   CreateIpamScopeRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIpamScopeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
