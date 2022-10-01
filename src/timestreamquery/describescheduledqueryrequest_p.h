// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESCHEDULEDQUERYREQUEST_P_H
#define QTAWS_DESCRIBESCHEDULEDQUERYREQUEST_P_H

#include "timestreamqueryrequest_p.h"
#include "describescheduledqueryrequest.h"

namespace QtAws {
namespace TimestreamQuery {

class DescribeScheduledQueryRequest;

class DescribeScheduledQueryRequestPrivate : public TimestreamQueryRequestPrivate {

public:
    DescribeScheduledQueryRequestPrivate(const TimestreamQueryRequest::Action action,
                                   DescribeScheduledQueryRequest * const q);
    DescribeScheduledQueryRequestPrivate(const DescribeScheduledQueryRequestPrivate &other,
                                   DescribeScheduledQueryRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeScheduledQueryRequest)

};

} // namespace TimestreamQuery
} // namespace QtAws

#endif
