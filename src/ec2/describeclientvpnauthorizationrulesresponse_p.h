// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBECLIENTVPNAUTHORIZATIONRULESRESPONSE_P_H
#define QTAWS_DESCRIBECLIENTVPNAUTHORIZATIONRULESRESPONSE_P_H

#include "ec2response_p.h"

namespace QtAws {
namespace Ec2 {

class DescribeClientVpnAuthorizationRulesResponse;

class DescribeClientVpnAuthorizationRulesResponsePrivate : public Ec2ResponsePrivate {

public:

    explicit DescribeClientVpnAuthorizationRulesResponsePrivate(DescribeClientVpnAuthorizationRulesResponse * const q);

    void parseDescribeClientVpnAuthorizationRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeClientVpnAuthorizationRulesResponse)
    Q_DISABLE_COPY(DescribeClientVpnAuthorizationRulesResponsePrivate)

};

} // namespace Ec2
} // namespace QtAws

#endif
