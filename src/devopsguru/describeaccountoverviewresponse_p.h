// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTOVERVIEWRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTOVERVIEWRESPONSE_P_H

#include "devopsgururesponse_p.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAccountOverviewResponse;

class DescribeAccountOverviewResponsePrivate : public DevOpsGuruResponsePrivate {

public:

    explicit DescribeAccountOverviewResponsePrivate(DescribeAccountOverviewResponse * const q);

    void parseDescribeAccountOverviewResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountOverviewResponse)
    Q_DISABLE_COPY(DescribeAccountOverviewResponsePrivate)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
