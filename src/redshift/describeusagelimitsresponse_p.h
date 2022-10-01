// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSAGELIMITSRESPONSE_P_H
#define QTAWS_DESCRIBEUSAGELIMITSRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class DescribeUsageLimitsResponse;

class DescribeUsageLimitsResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit DescribeUsageLimitsResponsePrivate(DescribeUsageLimitsResponse * const q);

    void parseDescribeUsageLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeUsageLimitsResponse)
    Q_DISABLE_COPY(DescribeUsageLimitsResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
