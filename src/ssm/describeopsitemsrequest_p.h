// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPSITEMSREQUEST_P_H
#define QTAWS_DESCRIBEOPSITEMSREQUEST_P_H

#include "ssmrequest_p.h"
#include "describeopsitemsrequest.h"

namespace QtAws {
namespace Ssm {

class DescribeOpsItemsRequest;

class DescribeOpsItemsRequestPrivate : public SsmRequestPrivate {

public:
    DescribeOpsItemsRequestPrivate(const SsmRequest::Action action,
                                   DescribeOpsItemsRequest * const q);
    DescribeOpsItemsRequestPrivate(const DescribeOpsItemsRequestPrivate &other,
                                   DescribeOpsItemsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOpsItemsRequest)

};

} // namespace Ssm
} // namespace QtAws

#endif
