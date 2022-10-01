// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEEXPORTIMAGETASKSREQUEST_P_H
#define QTAWS_DESCRIBEEXPORTIMAGETASKSREQUEST_P_H

#include "ec2request_p.h"
#include "describeexportimagetasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeExportImageTasksRequest;

class DescribeExportImageTasksRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeExportImageTasksRequestPrivate(const Ec2Request::Action action,
                                   DescribeExportImageTasksRequest * const q);
    DescribeExportImageTasksRequestPrivate(const DescribeExportImageTasksRequestPrivate &other,
                                   DescribeExportImageTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeExportImageTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
