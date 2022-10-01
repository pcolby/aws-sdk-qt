// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAPPLICATIONSREQUEST_P_H
#define QTAWS_DESCRIBEAPPLICATIONSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describeapplicationsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeApplicationsRequest;

class DescribeApplicationsRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeApplicationsRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeApplicationsRequest * const q);
    DescribeApplicationsRequestPrivate(const DescribeApplicationsRequestPrivate &other,
                                   DescribeApplicationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeApplicationsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
