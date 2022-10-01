// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSINGRESSRESPONSE_P_H
#define QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSINGRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class UpdateSecurityGroupRuleDescriptionsIngressResponse;

class UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate(UpdateSecurityGroupRuleDescriptionsIngressResponse * const q);

    void parseUpdateSecurityGroupRuleDescriptionsIngressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityGroupRuleDescriptionsIngressResponse)
    Q_DISABLE_COPY(UpdateSecurityGroupRuleDescriptionsIngressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
