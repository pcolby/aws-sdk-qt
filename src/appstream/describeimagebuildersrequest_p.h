// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGEBUILDERSREQUEST_P_H
#define QTAWS_DESCRIBEIMAGEBUILDERSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describeimagebuildersrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeImageBuildersRequest;

class DescribeImageBuildersRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeImageBuildersRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeImageBuildersRequest * const q);
    DescribeImageBuildersRequestPrivate(const DescribeImageBuildersRequestPrivate &other,
                                   DescribeImageBuildersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImageBuildersRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
