// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYIPAMRESOURCECIDRREQUEST_P_H
#define QTAWS_MODIFYIPAMRESOURCECIDRREQUEST_P_H

#include "ec2request_p.h"
#include "modifyipamresourcecidrrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifyIpamResourceCidrRequest;

class ModifyIpamResourceCidrRequestPrivate : public Ec2RequestPrivate {

public:
    ModifyIpamResourceCidrRequestPrivate(const Ec2Request::Action action,
                                   ModifyIpamResourceCidrRequest * const q);
    ModifyIpamResourceCidrRequestPrivate(const ModifyIpamResourceCidrRequestPrivate &other,
                                   ModifyIpamResourceCidrRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifyIpamResourceCidrRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
