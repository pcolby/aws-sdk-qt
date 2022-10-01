// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEVENTSREQUEST_P_H
#define QTAWS_DESCRIBEEVENTSREQUEST_P_H

#include "opsworkscmrequest_p.h"
#include "describeeventsrequest.h"

namespace QtAws {
namespace OpsWorksCm {

class DescribeEventsRequest;

class DescribeEventsRequestPrivate : public OpsWorksCmRequestPrivate {

public:
    DescribeEventsRequestPrivate(const OpsWorksCmRequest::Action action,
                                   DescribeEventsRequest * const q);
    DescribeEventsRequestPrivate(const DescribeEventsRequestPrivate &other,
                                   DescribeEventsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEventsRequest)

};

} // namespace OpsWorksCm
} // namespace QtAws

#endif
