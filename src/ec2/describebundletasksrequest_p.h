// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBUNDLETASKSREQUEST_P_H
#define QTAWS_DESCRIBEBUNDLETASKSREQUEST_P_H

#include "ec2request_p.h"
#include "describebundletasksrequest.h"

namespace QtAws {
namespace Ec2 {

class DescribeBundleTasksRequest;

class DescribeBundleTasksRequestPrivate : public Ec2RequestPrivate {

public:
    DescribeBundleTasksRequestPrivate(const Ec2Request::Action action,
                                   DescribeBundleTasksRequest * const q);
    DescribeBundleTasksRequestPrivate(const DescribeBundleTasksRequestPrivate &other,
                                   DescribeBundleTasksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBundleTasksRequest)

};

} // namespace Ec2
} // namespace QtAws

#endif
