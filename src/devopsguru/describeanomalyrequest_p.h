// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEANOMALYREQUEST_P_H
#define QTAWS_DESCRIBEANOMALYREQUEST_P_H

#include "devopsgururequest_p.h"
#include "describeanomalyrequest.h"

namespace QtAws {
namespace DevOpsGuru {

class DescribeAnomalyRequest;

class DescribeAnomalyRequestPrivate : public DevOpsGuruRequestPrivate {

public:
    DescribeAnomalyRequestPrivate(const DevOpsGuruRequest::Action action,
                                   DescribeAnomalyRequest * const q);
    DescribeAnomalyRequestPrivate(const DescribeAnomalyRequestPrivate &other,
                                   DescribeAnomalyRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAnomalyRequest)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
