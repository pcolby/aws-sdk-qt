// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSEGRESSRESPONSE_P_H
#define QTAWS_UPDATESECURITYGROUPRULEDESCRIPTIONSEGRESSRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class UpdateSecurityGroupRuleDescriptionsEgressResponse;

class UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate(UpdateSecurityGroupRuleDescriptionsEgressResponse * const q);

    void parseUpdateSecurityGroupRuleDescriptionsEgressResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateSecurityGroupRuleDescriptionsEgressResponse)
    Q_DISABLE_COPY(UpdateSecurityGroupRuleDescriptionsEgressResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
