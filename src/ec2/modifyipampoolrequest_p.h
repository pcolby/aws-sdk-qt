// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMPOOLREQUEST_P_H
#define QTAWS_MODIFYIPAMPOOLREQUEST_P_H

#include "ec2request_p.h"
#include "modifyipampoolrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamPoolRequest;

class ModifyIpamPoolRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyIpamPoolRequestPrivate(const Ec2Request::Action action,
                                   ModifyIpamPoolRequest * const q);
    ModifyIpamPoolRequestPrivate(const ModifyIpamPoolRequestPrivate &other,
                                   ModifyIpamPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyIpamPoolRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
