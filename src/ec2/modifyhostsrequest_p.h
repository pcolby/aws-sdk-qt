// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYHOSTSREQUEST_P_H
#define QTAWS_MODIFYHOSTSREQUEST_P_H

#include "ec2request_p.h"
#include "modifyhostsrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyHostsRequest;

class ModifyHostsRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyHostsRequestPrivate(const Ec2Request::Action action,
                                   ModifyHostsRequest * const q);
    ModifyHostsRequestPrivate(const ModifyHostsRequestPrivate &other,
                                   ModifyHostsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyHostsRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
