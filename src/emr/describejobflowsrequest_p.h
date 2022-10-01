// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBFLOWSREQUEST_P_H
#define QTAWS_DESCRIBEJOBFLOWSREQUEST_P_H

#include "emrrequest_p.h"
#include "describejobflowsrequest.h"

namespace QtAws {
namespace Emr {

class DescribeJobFlowsRequest;

class DescribeJobFlowsRequestPrivate : public EmrRequestPrivate {

public:
    DescribeJobFlowsRequestPrivate(const EmrRequest::Action action,
                                   DescribeJobFlowsRequest * const q);
    DescribeJobFlowsRequestPrivate(const DescribeJobFlowsRequestPrivate &other,
                                   DescribeJobFlowsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobFlowsRequest)

};

} // namespace Emr
} // namespace QtAws

#endif
