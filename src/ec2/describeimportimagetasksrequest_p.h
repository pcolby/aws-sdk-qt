// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEIMPORTIMAGETASKSREQUEST_P_H
#define QTAWS_DESCRIBEIMPORTIMAGETASKSREQUEST_P_H

#include "ec2request_p.h"
#include "describeimportimagetasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeImportImageTasksRequest;

class DescribeImportImageTasksRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeImportImageTasksRequestPrivate(const Ec2Request::Action action,
                                   DescribeImportImageTasksRequest * const q);
    DescribeImportImageTasksRequestPrivate(const DescribeImportImageTasksRequestPrivate &other,
                                   DescribeImportImageTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeImportImageTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
