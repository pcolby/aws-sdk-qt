// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSREQUEST_P_H

#include "neptunerequest_p.h"
#include "describeeventsrequest.h"

namespace QtAws {
namespace Neptune {

class DescribeEventsRequest;

class DescribeEventsRequestPrivate : public NeptuneRequestPrivate {

public:
    DescribeEventsRequestPrivate(const NeptuneRequest::Action action,
                                   DescribeEventsRequest * const q);
    DescribeEventsRequestPrivate(const DescribeEventsRequestPrivate &other,
                                   DescribeEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventsRequest)

};

} // namespace Neptune
} // namespace QtAws

#endif
