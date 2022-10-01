// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEUSERSTACKASSOCIATIONSREQUEST_P_H
#define QTAWS_DESCRIBEUSERSTACKASSOCIATIONSREQUEST_P_H

#include "appstreamrequest_p.h"
#include "describeuserstackassociationsrequest.h"

namespace QtAws {
namespace AppStream {

class DescribeUserStackAssociationsRequest;

class DescribeUserStackAssociationsRequestPrivate : public AppStreamRequestPrivate {

public:
    DescribeUserStackAssociationsRequestPrivate(const AppStreamRequest::Action action,
                                   DescribeUserStackAssociationsRequest * const q);
    DescribeUserStackAssociationsRequestPrivate(const DescribeUserStackAssociationsRequestPrivate &other,
                                   DescribeUserStackAssociationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeUserStackAssociationsRequest)

};

} // namespace AppStream
} // namespace QtAws

#endif
