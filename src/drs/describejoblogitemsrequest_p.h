// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEJOBLOGITEMSREQUEST_P_H
#define QTAWS_DESCRIBEJOBLOGITEMSREQUEST_P_H

#include "drsrequest_p.h"
#include "describejoblogitemsrequest.h"

namespace QtAws {
namespace Drs {

class DescribeJobLogItemsRequest;

class DescribeJobLogItemsRequestPrivate : public DrsRequestPrivate {

public:
    DescribeJobLogItemsRequestPrivate(const DrsRequest::Action action,
                                   DescribeJobLogItemsRequest * const q);
    DescribeJobLogItemsRequestPrivate(const DescribeJobLogItemsRequestPrivate &other,
                                   DescribeJobLogItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeJobLogItemsRequest)

};

} // namespace Drs
} // namespace QtAws

#endif
