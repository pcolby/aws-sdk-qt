// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDIRECTORYCONFIGSREQUEST_P_H
#define QTAWS_DESCRIBEDIRECTORYCONFIGSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describedirectoryconfigsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeDirectoryConfigsRequest;

class DescribeDirectoryConfigsRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeDirectoryConfigsRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeDirectoryConfigsRequest * const q);
    DescribeDirectoryConfigsRequestPrivate(const DescribeDirectoryConfigsRequestPrivate &other,
                                   DescribeDirectoryConfigsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDirectoryConfigsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
