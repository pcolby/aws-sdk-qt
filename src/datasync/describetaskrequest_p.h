// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETASKREQUEST_P_H
#define QTAWS_DESCRIBETASKREQUEST_P_H

#include "datasyncrequest_p.h"
#include "describetaskrequest.h"

namespace QtAws {
namespace DataSync {

class DescribeTaskRequest;

class DescribeTaskRequestPrivate : public DataSyncRequestPrivate {

public:
    DescribeTaskRequestPrivate(const DataSyncRequest::Action action,
                                   DescribeTaskRequest * const q);
    DescribeTaskRequestPrivate(const DescribeTaskRequestPrivate &other,
                                   DescribeTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeTaskRequest)

};

} // namespace DataSync
} // namespace QtAws

#endif
