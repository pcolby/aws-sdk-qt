// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESTOREIMAGETASKSREQUEST_P_H
#define QTAWS_DESCRIBESTOREIMAGETASKSREQUEST_P_H

#include "ec2request_p.h"
#include "describestoreimagetasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeStoreImageTasksRequest;

class DescribeStoreImageTasksRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeStoreImageTasksRequestPrivate(const Ec2Request::Action action,
                                   DescribeStoreImageTasksRequest * const q);
    DescribeStoreImageTasksRequestPrivate(const DescribeStoreImageTasksRequestPrivate &other,
                                   DescribeStoreImageTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeStoreImageTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
