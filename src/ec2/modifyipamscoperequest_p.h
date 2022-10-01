// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMSCOPEREQUEST_P_H
#define QTAWS_MODIFYIPAMSCOPEREQUEST_P_H

#include "ec2request_p.h"
#include "modifyipamscoperequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamScopeRequest;

class ModifyIpamScopeRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyIpamScopeRequestPrivate(const Ec2Request::Action action,
                                   ModifyIpamScopeRequest * const q);
    ModifyIpamScopeRequestPrivate(const ModifyIpamScopeRequestPrivate &other,
                                   ModifyIpamScopeRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyIpamScopeRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
