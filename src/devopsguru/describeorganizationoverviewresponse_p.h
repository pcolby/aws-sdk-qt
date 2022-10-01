// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEORGANIZATIONOVERVIEWRESPONSE_P_H
#define QTAWS_DESCRIBEORGANIZATIONOVERVIEWRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeOrganizationOverviewResponse;

class DescribeOrganizationOverviewResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeOrganizationOverviewResponsePrivate(DescribeOrganizationOverviewResponse * const q);

    void parseDescribeOrganizationOverviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeOrganizationOverviewResponse)
    Q_DISABLE_COPY(DescribeOrganizationOverviewResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
