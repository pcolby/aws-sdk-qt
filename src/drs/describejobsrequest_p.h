// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBSREQUEST_P_H
#define QTAWS_DESCRIBEJOBSREQUEST_P_H

#include "drsrequest_p.h"
#include "describejobsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeJobsRequest;

class DescribeJobsRequestPrivate : public DrsRequestPrivate {

public:
    DescribeJobsRequestPrivate(const DrsRequest::Action action,
                                   DescribeJobsRequest * const q);
    DescribeJobsRequestPrivate(const DescribeJobsRequestPrivate &other,
                                   DescribeJobsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobsRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
