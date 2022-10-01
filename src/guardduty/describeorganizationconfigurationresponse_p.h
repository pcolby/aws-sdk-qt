// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONCONFIGURATIONRESPONSE_P_H

#include "guarddutyresponse_p.h"

namespace QtAws {
namespace GuardDuty {

class DescribeOrganizationConfigurationResponse;

class DescribeOrganizationConfigurationResponsePrivate : public GuardDutyResponsePrivate {

public:

    explicit DescribeOrganizationConfigurationResponsePrivate(DescribeOrganizationConfigurationResponse * const q);

    void parseDescribeOrganizationConfigurationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationConfigurationResponse)
    Q_DISABLE_COPY(DescribeOrganizationConfigurationResponsePrivate)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
