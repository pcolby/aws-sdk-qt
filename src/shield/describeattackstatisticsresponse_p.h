// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACKSTATISTICSRESPONSE_P_H
#define QTAWS_DESCRIBEATTACKSTATISTICSRESPONSE_P_H

#include "shieldresponse_p.h"

namespace QtAws {
namespace Shield {

class DescribeAttackStatisticsResponse;

class DescribeAttackStatisticsResponsePrivate : public ShieldResponsePrivate {

public:

    explicit DescribeAttackStatisticsResponsePrivate(DescribeAttackStatisticsResponse * const q);

    void parseDescribeAttackStatisticsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAttackStatisticsResponse)
    Q_DISABLE_COPY(DescribeAttackStatisticsResponsePrivate)

};

} // namespace Shield
} // namespace QtAws

#endif
