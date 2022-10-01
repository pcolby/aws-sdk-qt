// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSECURITYGROUPRULESREQUEST_P_H
#define QTAWS_MODIFYSECURITYGROUPRULESREQUEST_P_H

#include "ec2request_p.h"
#include "modifysecuritygrouprulesrequest.h"

namespace QtAws {
namespace Ec2 {

class ModifySecurityGroupRulesRequest;

class ModifySecurityGroupRulesRequestPrivate : public Ec2RequestPrivate {

public:
    ModifySecurityGroupRulesRequestPrivate(const Ec2Request::Action action,
                                   ModifySecurityGroupRulesRequest * const q);
    ModifySecurityGroupRulesRequestPrivate(const ModifySecurityGroupRulesRequestPrivate &other,
                                   ModifySecurityGroupRulesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ModifySecurityGroupRulesRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
