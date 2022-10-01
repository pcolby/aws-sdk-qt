// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEATTACKSTATISTICSREQUEST_P_H
#define QTAWS_DESCRIBEATTACKSTATISTICSREQUEST_P_H

#include "shieldrequest_p.h"
#include "describeattackstatisticsrequest.h"

namespace QtAws {
namespace Shield {

class DescribeAttackStatisticsRequest;

class DescribeAttackStatisticsRequestPrivate : public ShieldRequestPrivate {

public:
    DescribeAttackStatisticsRequestPrivate(const ShieldRequest::Action action,
                                   DescribeAttackStatisticsRequest * const q);
    DescribeAttackStatisticsRequestPrivate(const DescribeAttackStatisticsRequestPrivate &other,
                                   DescribeAttackStatisticsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAttackStatisticsRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
