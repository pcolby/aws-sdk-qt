// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEENTITLEMENTSREQUEST_P_H
#define QTAWS_DESCRIBEENTITLEMENTSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describeentitlementsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeEntitlementsRequest;

class DescribeEntitlementsRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeEntitlementsRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeEntitlementsRequest * const q);
    DescribeEntitlementsRequestPrivate(const DescribeEntitlementsRequestPrivate &other,
                                   DescribeEntitlementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeEntitlementsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
