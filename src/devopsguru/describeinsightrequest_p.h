// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSIGHTREQUEST_P_H
#define QTAWS_DESCRIBEINSIGHTREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeinsightrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeInsightRequest;

class DescribeInsightRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeInsightRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeInsightRequest * const q);
    DescribeInsightRequestPrivate(const DescribeInsightRequestPrivate &other,
                                   DescribeInsightRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInsightRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
