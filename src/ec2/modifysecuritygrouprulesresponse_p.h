// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYSECURITYGROUPRULESRESPONSE_P_H
#define QTAWS_MODIFYSECURITYGROUPRULESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class ModifySecurityGroupRulesResponse;

class ModifySecurityGroupRulesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit ModifySecurityGroupRulesResponsePrivate(ModifySecurityGroupRulesResponse * const q);

    void parseModifySecurityGroupRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifySecurityGroupRulesResponse)
    Q_DISABLE_COPY(ModifySecurityGroupRulesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
