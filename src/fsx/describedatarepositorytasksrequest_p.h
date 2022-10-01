// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDATAREPOSITORYTASKSREQUEST_P_H
#define QTAWS_DESCRIBEDATAREPOSITORYTASKSREQUEST_P_H

#include "fsxrequest_p.h"
#include "describedatarepositorytasksrequest.h"

namespace QtAws {
namespace FSx {

class DescribeDataRepositoryTasksRequest;

class DescribeDataRepositoryTasksRequestPrivate : public FSxRequestPrivate {

public:
    DescribeDataRepositoryTasksRequestPrivate(const FSxRequest::Action action,
                                   DescribeDataRepositoryTasksRequest * const q);
    DescribeDataRepositoryTasksRequestPrivate(const DescribeDataRepositoryTasksRequestPrivate &other,
                                   DescribeDataRepositoryTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDataRepositoryTasksRequest)

};

} // namespace FSx
} // namespace QtAws

#endif
