// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSREQUEST_P_H

#include "docdbrequest_p.h"
#include "describeeventsrequest.h"

namespace QtAws {
namespace DocDb {

class DescribeEventsRequest;

class DescribeEventsRequestPrivate : public DocDbRequestPrivate {

public:
    DescribeEventsRequestPrivate(const DocDbRequest::Action action,
                                   DescribeEventsRequest * const q);
    DescribeEventsRequestPrivate(const DescribeEventsRequestPrivate &other,
                                   DescribeEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventsRequest)

};

} // namespace DocDb
} // namespace QtAws

#endif
