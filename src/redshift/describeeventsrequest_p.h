// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSREQUEST_P_H

#include "redshiftrequest_p.h"
#include "describeeventsrequest.h"

namespace QtAws {
namespace Redshift {

class DescribeEventsRequest;

class DescribeEventsRequestPrivate : public RedshiftRequestPrivate {

public:
    DescribeEventsRequestPrivate(const RedshiftRequest::Action action,
                                   DescribeEventsRequest * const q);
    DescribeEventsRequestPrivate(const DescribeEventsRequestPrivate &other,
                                   DescribeEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventsRequest)

};

} // namespace Redshift
} // namespace QtAws

#endif
