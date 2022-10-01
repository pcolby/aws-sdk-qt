// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEREPLACEROOTVOLUMETASKSREQUEST_P_H
#define QTAWS_DESCRIBEREPLACEROOTVOLUMETASKSREQUEST_P_H

#include "ec2request_p.h"
#include "describereplacerootvolumetasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeReplaceRootVolumeTasksRequest;

class DescribeReplaceRootVolumeTasksRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeReplaceRootVolumeTasksRequestPrivate(const Ec2Request::Action action,
                                   DescribeReplaceRootVolumeTasksRequest * const q);
    DescribeReplaceRootVolumeTasksRequestPrivate(const DescribeReplaceRootVolumeTasksRequestPrivate &other,
                                   DescribeReplaceRootVolumeTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeReplaceRootVolumeTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
