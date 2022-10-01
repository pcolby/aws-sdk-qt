// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPACKAGINGGROUPREQUEST_P_H
#define QTAWS_DESCRIBEPACKAGINGGROUPREQUEST_P_H

#include "mediapackagevodrequest_p.h"
#include "describepackaginggrouprequest.h"

namespace QtAws {
namespace MediaPackageVod {

class DescribePackagingGroupRequest;

class DescribePackagingGroupRequestPrivate : public MediaPackageVodRequestPrivate {

public:
    DescribePackagingGroupRequestPrivate(const MediaPackageVodRequest::Action action,
                                   DescribePackagingGroupRequest * const q);
    DescribePackagingGroupRequestPrivate(const DescribePackagingGroupRequestPrivate &other,
                                   DescribePackagingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePackagingGroupRequest)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
