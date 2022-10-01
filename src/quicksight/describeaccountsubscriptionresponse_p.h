// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTSUBSCRIPTIONRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTSUBSCRIPTIONRESPONSE_P_H

#include "quicksightresponse_p.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountSubscriptionResponse;

class DescribeAccountSubscriptionResponsePrivate : public QuickSightResponsePrivate {

public:

    explicit DescribeAccountSubscriptionResponsePrivate(DescribeAccountSubscriptionResponse * const q);

    void parseDescribeAccountSubscriptionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountSubscriptionResponse)
    Q_DISABLE_COPY(DescribeAccountSubscriptionResponsePrivate)

};

} // namespace QuickSight
} // namespace QtAws

#endif
