// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDACTIONSRESPONSE_P_H
#define QTAWS_DESCRIBESCHEDULEDACTIONSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeScheduledActionsResponse;

class DescribeScheduledActionsResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeScheduledActionsResponsePrivate(DescribeScheduledActionsResponse * const q);

    void parseDescribeScheduledActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledActionsResponse)
    Q_DISABLE_COPY(DescribeScheduledActionsResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
