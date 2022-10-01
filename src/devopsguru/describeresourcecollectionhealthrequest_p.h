// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCECOLLECTIONHEALTHREQUEST_P_H
#define QTAWS_DESCRIBERESOURCECOLLECTIONHEALTHREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeresourcecollectionhealthrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeResourceCollectionHealthRequest;

class DescribeResourceCollectionHealthRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeResourceCollectionHealthRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeResourceCollectionHealthRequest * const q);
    DescribeResourceCollectionHealthRequestPrivate(const DescribeResourceCollectionHealthRequestPrivate &other,
                                   DescribeResourceCollectionHealthRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeResourceCollectionHealthRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
