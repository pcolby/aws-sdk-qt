// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDACTIONSREQUEST_P_H
#define QTAWS_DESCRIBESCHEDULEDACTIONSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describescheduledactionsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeScheduledActionsRequest;

class DescribeScheduledActionsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeScheduledActionsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeScheduledActionsRequest * const q);
    DescribeScheduledActionsRequestPrivate(const DescribeScheduledActionsRequestPrivate &other,
                                   DescribeScheduledActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledActionsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
