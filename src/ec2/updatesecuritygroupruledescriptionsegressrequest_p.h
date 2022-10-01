// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSEGRESSREQUEST_P_H
#define QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSEGRESSREQUEST_P_H

#include "ec2request_p.h"
#include "updatesecuritygroupruledescriptionsegressrequest.h"

namespace QtAws {
namespace Ec2 {

class UpdateSecurityGroupRuleDescriptionsEgressRequest;

class UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate : public Ec2RequestPrivate {

public:
    UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate(const Ec2Request::Action action,
                                   UpdateSecurityGroupRuleDescriptionsEgressRequest * const q);
    UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate(const UpdateSecurityGroupRuleDescriptionsEgressRequestPrivate &other,
                                   UpdateSecurityGroupRuleDescriptionsEgressRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityGroupRuleDescriptionsEgressRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
