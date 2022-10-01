// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMAGESCANFINDINGSREQUEST_P_H
#define QTAWS_DESCRIBEIMAGESCANFINDINGSREQUEST_P_H

#include "ecrrequest_p.h"
#include "describeimagescanfindingsrequest.h"

namespace QtAws {
namespace Ecr {

class DescribeImageScanFindingsRequest;

class DescribeImageScanFindingsRequestPrivate : public EcrRequestPrivate {

public:
    DescribeImageScanFindingsRequestPrivate(const EcrRequest::Action action,
                                   DescribeImageScanFindingsRequest * const q);
    DescribeImageScanFindingsRequestPrivate(const DescribeImageScanFindingsRequestPrivate &other,
                                   DescribeImageScanFindingsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImageScanFindingsRequest)

};

} // namespace Ecr
} // namespace QtAws

#endif
