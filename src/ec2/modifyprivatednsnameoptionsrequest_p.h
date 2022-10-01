// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYPRIVATEDNSNAMEOPTIONSREQUEST_P_H
#define QTAWS_MODIFYPRIVATEDNSNAMEOPTIONSREQUEST_P_H

#include "ec2request_p.h"
#include "modifyprivatednsnameoptionsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyPrivateDnsNameOptionsRequest;

class ModifyPrivateDnsNameOptionsRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyPrivateDnsNameOptionsRequestPrivate(const Ec2Request::Action action,
                                   ModifyPrivateDnsNameOptionsRequest * const q);
    ModifyPrivateDnsNameOptionsRequestPrivate(const ModifyPrivateDnsNameOptionsRequestPrivate &other,
                                   ModifyPrivateDnsNameOptionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyPrivateDnsNameOptionsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
