// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKEXECUTIONREQUEST_P_H
#define QTAWS_DESCRIBETASKEXECUTIONREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describetaskexecutionrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeTaskExecutionRequest;

class DescribeTaskExecutionRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeTaskExecutionRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeTaskExecutionRequest * const q);
    DescribeTaskExecutionRequestPrivate(const DescribeTaskExecutionRequestPrivate &other,
                                   DescribeTaskExecutionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTaskExecutionRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
