// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPBLOCKSREQUEST_P_H
#define QTAWS_DESCRIBEAPPBLOCKSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describeappblocksrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeAppBlocksRequest;

class DescribeAppBlocksRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeAppBlocksRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeAppBlocksRequest * const q);
    DescribeAppBlocksRequestPrivate(const DescribeAppBlocksRequestPrivate &other,
                                   DescribeAppBlocksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAppBlocksRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
