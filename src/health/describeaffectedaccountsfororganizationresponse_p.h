// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAFFECTEDACCOUNTSFORORGANIZATIONRESPONSE_P_H
#define QTAWS_DESCRIBEAFFECTEDACCOUNTSFORORGANIZATIONRESPONSE_P_H

#include "healthresponse_p.h"

namespace QtAws {
namespace Health {

class DescribeAffectedAccountsForOrganizationResponse;

class DescribeAffectedAccountsForOrganizationResponsePrivate : public HealthResponsePrivate {

public:

    explicit DescribeAffectedAccountsForOrganizationResponsePrivate(DescribeAffectedAccountsForOrganizationResponse * const q);

    void parseDescribeAffectedAccountsForOrganizationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAffectedAccountsForOrganizationResponse)
    Q_DISABLE_COPY(DescribeAffectedAccountsForOrganizationResponsePrivate)

};

} // namespace Health
} // namespace QtAws

#endif
