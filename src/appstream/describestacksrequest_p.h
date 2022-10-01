// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTACKSREQUEST_P_H
#define QTAWS_DESCRIBESTACKSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describestacksrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeStacksRequest;

class DescribeStacksRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeStacksRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeStacksRequest * const q);
    DescribeStacksRequestPrivate(const DescribeStacksRequestPrivate &other,
                                   DescribeStacksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStacksRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
